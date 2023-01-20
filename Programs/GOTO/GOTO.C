#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter a number : ");
scanf("%d", &a);
if(a%2 == 0){
goto EVEN;
}
else{
goto ODD;
}
EVEN : printf("Number is even");
	getch();
	return;
ODD : printf("Number is odd");
	getch();
	return;
}
