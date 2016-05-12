/*****************************************************
 * NAME: assignment_19.c                             *  
 *                                                   *
 * AUTHOR: Devarsh Ruparelia                         *
 *                                                   *
 * EMAIL: devarsh.ruparelia@gmail.com                *
 *                                                   *
 * PURPOSE: Use if to find out area of triangle,     *
 *           rectangle and circle.                   *                     
 *                                                   *                        
 * DATE: 08/05/2016                                  *
 *                                                   *
 *****************************************************/

#include <stdio.h>
#include <math.h>


#define pi 3.14

int main()
{
  // Declaration of variables:
  float side1, side2, side3;  /* Note: side1 is considered as radius too. */
  int shapecode;
  float area_circle, area_rectangle, sperimeter;
  double area_triangle;

  // I/O and processing:
  printf("Welcome to area calc program!\n");
  printf("To calculate area of a shape in the list input its number when prompted.\n");
  printf("1 - Circle\n");
  printf("2 - Rectangle\n");
  printf("3 - Triangle\n");
  printf("Enter the numerical code of the shape you want to work on:");
  scanf("%d", &shapecode);

  if (shapecode == 1) {
    printf("Enter the radius of the circle to calculate its area:");
    scanf("%f", &side1);

    area_circle = pi * side1 * side1;

    printf("Area = %f sq units.\n", area_circle);

  }

  else if (shapecode == 2) {
    printf("Enter the length and breadth of rectangle with one space b/w each:\n");
    scanf("%f %f", &side1, &side2);

    area_rectangle = side1 * side2;

    printf("Area = %f sq units.\n", area_rectangle);

  }

  else if (shapecode == 3) {
    printf("Enter sides of triangle with one space b/w each:\n");
    scanf("%f %F %f", &side1, &side2, &side3);

    sperimeter = (side1 + side2 + side3)/2;
    area_triangle = (double) sqrt(sperimeter * (sperimeter - side1) * (sperimeter - side2) * (sperimeter - side3));
    /* Note that type conversion is important in cases like above.*/

    printf("Area = %f\n", area_triangle);

  }

  else {
    printf("Error in your input. Restart the program.\n");

  }

  printf("Thank you for using the program.\n");
}
