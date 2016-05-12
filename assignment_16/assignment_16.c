/*****************************************************
 * NAME: assignment_8.c                              *  
 *                                                   *
 * AUTHOR: Devarsh Ruparelia                         *
 *                                                   *
 * EMAIL: devarsh.ruparelia@gmail.com                *
 *                                                   *
 * PURPOSE: Program to calculate sum of 5 subjects   *
 *           & find the percentage.                  *
 *                                                   *                          
 * DATE: 01/05/2016                                  *
 *                                                   *
 *****************************************************/

#include <stdio.h>

int main()
{
  // Declaration of variables:
  float total, sub1, sub2, sub3, sub4, sub5;
  float sum, percentage;

  // User Input
  printf("Welcome to exam total and percentage calculator program.\n");
  printf("Enter the total marks possible to achieve in a subject: ");
  scanf("%f", &total);
  printf("Enter the marks of 5 subjects from 100 with one space between each below:\n");
  scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

  // Processing of input:
  sum = sub1 + sub2 + sub3 + sub4 + sub5;
  percentage = ((sum)/ (5 * total)) *  100.00;

  // Displaying the output and further processing it:
  printf("Sum of marks = %f\n", sum);
  printf("Percentage achieved = %f\n", percentage);

  if (percentage > 75.00) {
    printf("Passed with Distinction.\n");
  }

  else if (60.00 < percentage && percentage <= 75.00) {
    printf("Passed with First Class.\n");
  }

  else if (50.00 < percentage && percentage <= 60.00) {
    printf("Passed with Second Class.\n");
  }

  else if (35.00 < percentage && percentage <= 50.00) {
    printf("Passed with First Class.\n");
  }

  else {
    printf("Failed.\n");
  }
  
  printf("Thank you for using the program.\n");
}  
