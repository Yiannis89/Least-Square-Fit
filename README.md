# Least-Square-Fit
## Given numeric data points, find an equation that approximates the data with a least square fit. This is one of many techniques for getting an analytical approximation to numeric data.
The problem is stated as follows :
   Given measured data for values of Y based on values of X1,X2 and X3. e.g.

  Find a, b and c such that   Y_approximate =  a * X1 + b * X2 + c * X3
  and such that the sum of (Y_actual - Y_approximate) squared is minimized.
  (We are minimizing RMS error.)

this program does the least square fit with 3, 4, ... , 17 degree polynomials. Computes the maximum error, the average error and RMS error for each fit. It prints out your data. Removes excess printout, and printa out the polynomial order for each degree 3..17 and print out maximum, average and RMS error for each.

# output:
n = 3      max = 8.71874      avg = 1.40921      rms = 2.43634      
n = 4      max = 7.30681      avg = 1.31027      rms = 2.03076      
n = 5      max = 6.15870      avg = 1.29223      rms = 1.86834      
n = 6      max = 4.69051      avg = 0.85747      rms = 1.40694      
n = 7      max = 4.54922      avg = 0.82800      rms = 1.36929      
n = 8      max = 4.62642      avg = 0.74720      rms = 1.36082      
n = 9      max = 3.92455      avg = 0.75562      rms = 1.24916      
n = 10     max = 3.04212      avg = 0.73659      rms = 1.09085      
n = 11     max = 2.19526      avg = 0.65561      rms = 0.82278      
n = 12     max = 2.80105      avg = 0.68073      rms = 0.96726      
n = 13     max = 2.21196      avg = 0.43413      rms = 0.71519      
n = 14     max = 2.27851      avg = 0.73017      rms = 0.90065      
n = 15     max = 2.18246      avg = 0.55476      rms = 0.75592      
n = 16     max = 2.02769      avg = 0.46345      rms = 0.68003      
n = 17     max = 1.81681      avg = 0.36129      rms = 0.60491      
