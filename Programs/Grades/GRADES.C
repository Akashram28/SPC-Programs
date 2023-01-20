#include<stdio.h>
#include<conio.h>

void main(){
int percent;
clrscr();
printf("Enter percentage : ");
scanf("%d",&percent);
if(percent>85 && percent<=100){
printf("Grade is A");
}
else if(percent>60 && percent<=85){
printf("Grade is B+");
}
else if(percent>40 && percent<=60){
printf("Grade is B");
}
else if(percent>30 && percent<=40){
printf("FAIL");
}
getch();
}