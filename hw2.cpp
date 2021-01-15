#include<iostream>
#include<iomanip>
#include<cmath>
#include <stdlib.h>

using namespace std;

void errorCalc(int N, double *x, double *y, int n);

int main()
{
	int N;
	cout.precision(5);                        //set precision
	cout.setf(ios::fixed);
	N = 20;
	double x[20] = { 0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0,1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9 };
	double y[20] = { 0,6,14,4.9,4.5,4.3,4.4,4.3,4.4,4.3,4.3,4.3,4.3,4.3,4.4,4.3,4.3,4.3,4.4,0.0 };

	for (int i = 3; i <= 17; i++)
		errorCalc(N, x, y, i);

	return 0;
}

void errorCalc(int N, double *x, double *y, int n) {
	int i, j, k;
	double sumError = 0, maxError = 0, rmsError = 0, sumAbsErrorRms=0, absError=0, avgError=0;
	double X[2 * n + 1];                        //Array that will store the values of sigma(xi),sigma(xi^2),sigma(xi^3)....sigma(xi^2n)
	for (i = 0; i < 2 * n + 1; i++)
	{
		X[i] = 0;
		for (j = 0; j < N; j++)
			X[i] = X[i] + pow(x[j], i);        //consecutive positions of the array will store N,sigma(xi),sigma(xi^2),sigma(xi^3)....sigma(xi^2n)
	}
	double B[n + 1][n + 2], a[n + 1];            //B is the Normal matrix(augmented) that will store the equations, 'a' is for value of the final coefficients
	for (i = 0; i <= n; i++)
		for (j = 0; j <= n; j++)
			B[i][j] = X[i + j];            //Build the Normal matrix by storing the corresponding coefficients at the right positions except the last column of the matrix
	double Y[n + 1];                    //Array to store the values of sigma(yi),sigma(xi*yi),sigma(xi^2*yi)...sigma(xi^n*yi)
	for (i = 0; i < n + 1; i++)
	{
		Y[i] = 0;
		for (j = 0; j < N; j++)
			Y[i] = Y[i] + pow(x[j], i)*y[j];        //consecutive positions will store sigma(yi),sigma(xi*yi),sigma(xi^2*yi)...sigma(xi^n*yi)
	}
	for (i = 0; i <= n; i++)
		B[i][n + 1] = Y[i];                //load the values of Y as the last column of B(Normal Matrix but augmented)
	n = n + 1;                //n is made n+1 because the Gaussian Elimination part below was for n equations, but here n is the degree of polynomial and for n degree we get n+1 equations
	
							  //cout << "\nThe Normal(Augmented Matrix) is as follows:\n";
	
	for (i = 0; i < n; i++)                    //From now Gaussian Elimination starts(can be ignored) to solve the set of linear equations (Pivotisation)
		for (k = i + 1; k < n; k++)
			if (B[i][i] < B[k][i])
				for (j = 0; j <= n; j++)
				{
					double temp = B[i][j];
					B[i][j] = B[k][j];
					B[k][j] = temp;
				}

	for (i = 0; i < n - 1; i++)            //loop to perform the gauss elimination
		for (k = i + 1; k < n; k++)
		{
			double t = B[k][i] / B[i][i];
			for (j = 0; j <= n; j++)
				B[k][j] = B[k][j] - t * B[i][j];    //make the elements below the pivot elements equal to zero or elimnate the variables
		}
	for (i = n - 1; i >= 0; i--)                //back-substitution
	{                        //x is an array whose values correspond to the values of x,y,z..
		a[i] = B[i][n];                //make the variable to be calculated equal to the rhs of the last equation
		for (j = 0; j < n; j++)
			if (j != i)            //then subtract all the lhs values except the coefficient of the variable whose value                                   is being calculated
				a[i] = a[i] - B[i][j] * a[j];
		a[i] = a[i] / B[i][i];            //now finally divide the rhs by the coefficient of the variable to be calculated
	}

	//printing the errors
	for (i=0;i<N;i++){
	double temp = 0;
		for (j = 0; j < n; j++) {
			temp+= a[j]*pow(x[i], j);
		}
		absError = abs(y[i] - temp);
		sumAbsErrorRms += pow(absError,2);
		sumError += absError;
		maxError=(absError > maxError) ? absError : maxError;
		//cout << y[i]<< endl;
	}
	avgError = sumError / (double)N;
	rmsError = sqrt(sumAbsErrorRms / (double)N);
	cout << "n = " <<left<< setw(7) << (n-1 )<<"max = "<<left<< setw(13)<<maxError;
	cout << "avg = " <<left<< setw(13) << avgError << "rms = " <<left<< setw(13) << rmsError<<endl;

}