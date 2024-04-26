/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
int num1,sum=0;
  
prinf("enter fist sub mark : ");
scanf("%d",&num1);  
  while(num1>0){
    sum=sum+num1;
    sum--;
  }
  prinf("sum : %d",sum);
  return 0;
}

