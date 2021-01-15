# Least-Square-Fit
Given numeric data points, find an equation that approximates the data with a least square fit. This is one of many techniques for getting an analytical approximation to numeric data.
The problem is stated as follows :
   Given measured data for values of Y based on values of X1,X2 and X3. e.g.

  Find a, b and c such that   Y_approximate =  a * X1 + b * X2 + c * X3
  and such that the sum of (Y_actual - Y_approximate) squared is minimized.
  (We are minimizing RMS error.)

this program does the least square fit with 3, 4, ... , 17 degree polynomials. Computes the maximum error, the average error and RMS error for each fit. It prints out your data. Removes excess printout, and printa out the polynomial order for each degree 3..17 and print out maximum, average and RMS error for each.
