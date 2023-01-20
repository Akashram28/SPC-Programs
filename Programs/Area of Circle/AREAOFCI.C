#include<stdio.h>
#include<conio.h>

void main(){
const float pi = 3.14;
float radius,rate;
int p,n;
clrscr();
printf("Enter radius : ");
scanf("%f" ,&radius);
printf("Enter p,r,n : ");
scanf("%d%f%d" ,&p,&rate,&n);
printf("\nArea of circle is :  %f", pi*radius*radius);
printf("\nSimple interst : %f" ,p*rate*n/100);

getch();

}