# Least-Square-Fit
Given numeric data points, find an equation that approximates the data with a least square fit. This is one of many techniques for getting an analytical approximation to numeric data.
The problem is stated as follows :
   Given measured data for values of Y based on values of X1,X2 and X3. e.g.

  Find a, b and c such that   Y_approximate =  a * X1 + b * X2 + c * X3
  and such that the sum of (Y_actual - Y_approximate) squared is minimized.
  (We are minimizing RMS error.)

this program does the least square fit with 3, 4, ... , 17 degree polynomials. Computes the maximum error, the average error and RMS error for each fit. It prints out your data. Removes excess printout, and printa out the polynomial order for each degree 3..17 and print out maximum, average and RMS error for each.

## output:
n = 3   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;   max = 8.71874   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;   avg = 1.40921   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;   rms = 2.43634      
n = 4  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;    max = 7.30681    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  avg = 1.31027   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;   rms = 2.03076      
n = 5    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  max = 6.15870    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  avg = 1.29223   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;   rms = 1.86834      
n = 6  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;    max = 4.69051   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;   avg = 0.85747    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  rms = 1.40694      
n = 7  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;    max = 4.54922   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;   avg = 0.82800   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;   rms = 1.36929      
n = 8    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  max = 4.62642   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;   avg = 0.74720   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;   rms = 1.36082      
n = 9   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;   max = 3.92455   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;   avg = 0.75562  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;    rms = 1.24916      
n = 10   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  max = 3.04212   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;   avg = 0.73659  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;    rms = 1.09085      
n = 11   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  max = 2.19526   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;   avg = 0.65561    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  rms = 0.82278      
n = 12  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;   max = 2.80105   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;   avg = 0.68073   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;   rms = 0.96726      
n = 13   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  max = 2.21196    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  avg = 0.43413    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  rms = 0.71519      
n = 14  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;   max = 2.27851   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;   avg = 0.73017  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;    rms = 0.90065      
n = 15   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  max = 2.18246   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;   avg = 0.55476   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;   rms = 0.75592      
n = 16   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  max = 2.02769   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;   avg = 0.46345    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  rms = 0.68003      
n = 17  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  max = 1.81681   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;   avg = 0.36129   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;   rms = 0.60491      
