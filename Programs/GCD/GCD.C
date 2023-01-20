#include<stdio.h>
#include<conio.h>

void gcd(int a, int b);
void main(){
int num1,num2;
clrscr();
printf("Enter two numbers (num1>num2): ");
scanf("%d%d",&num1,&num2);
gcd(num1,num2);
getch();
}
void gcd(int a, int b){
if(b == 0){
 printf("GCD is %d", a);
}
else{
gcd(b,a%b);
}
}