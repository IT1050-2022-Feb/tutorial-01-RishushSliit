/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   
int num1,num2;
prinf("enter fist sub mark : ");
scanf("%d",&num1);   
prinf("enter second sub mark : ");
scanf("%d",&num2);

num1=(num1+num2)/2;

   prinf("average of the two marks :%d ",num1);
  return 0;
}

