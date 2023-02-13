#include<stdio.h>
#include<conio.h>

void main(){
int a[] = {1,2,3,4,5};
int i,num;
clrscr();
printf("Enter number : ");
scanf("%d",&num);
for(i=0;i<5;i++){
printf("%d", a[i]);
}
for(num;num<4;num++){
a[num+1] = a[num];
}
getch();
}