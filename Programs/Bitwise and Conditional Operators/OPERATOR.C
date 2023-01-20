#include<stdio.h>
#include<conio.h>

void main(){
int a,b;
clrscr();
printf("Enter two number : ");
scanf("%d%d",&a,&b );
printf("Bitwise left shift is :  %d\n" , a<<1);
printf("Bitwise right shift is :  %d\n" , a>>1);
printf("Bitwise and is :  %d\n",a&b);
printf("Bitewise exor is : %d\n" , a^b);
printf("Bitwise conjugate : %d\n" , ~a);
//Conditional Operator
(a%2==0)?(printf("Even\n")):(printf("Odd\n"));
(a>b)?(printf("a is greater")):(printf("b id greater"));
getch();
}