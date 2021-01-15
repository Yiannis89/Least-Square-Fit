# Least-Square-Fit
Given numeric data points, find an equation that approximates the data with a least square fit. This is one of many techniques for getting an analytical approximation to numeric data.
The problem is stated as follows :
   Given measured data for values of Y based on values of X1,X2 and X3. e.g.

    Y_actual         X1      X2     X3    observation, i
    --------       -----   -----  -----
     32.5           1.0     2.5    3.7                 1
      7.2           2.0     2.5    3.6                 2
      6.9           3.0     2.7    3.5                 3
     22.4           2.2     2.1    3.1                 4
     10.4           1.5     2.0    2.6                 5
     11.3           1.6     2.0    3.1                 6

  Find a, b and c such that   Y_approximate =  a * X1 + b * X2 + c * X3
  and such that the sum of (Y_actual - Y_approximate) squared is minimized.
  (We are minimizing RMS error.)

 The method for determining the coefficients a, b and c follows directly
 form the problem definition and mathematical analysis given below.

 Set up and solve the system of linear equations:
 (Each SUM is for i=1 thru 6 per table above, note symmetry)

 | SUM(X1*X1)  SUM(X1*X2)  SUM(X1*X3) |   | a |   | SUM(X1*Y) |
 | SUM(X2*X1)  SUM(X2*X2)  SUM(X2*X3) | x | b | = | SUM(X2*Y) |
 | SUM(X3*X1)  SUM(X3*X2)  SUM(X3*X3) |   | c |   | SUM(X3*Y) |
