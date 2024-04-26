/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  int km;
  float total=0;

prinf("enter  distance the van has travelled : ");
scanf("%d",&km);

if(km<=30){
  total=50*km;
}
else if(km>30){
  total=30*50+(km-30)*40;
}
  
prinf("Amount :%.2f ",total);
  
  return 0;
}
