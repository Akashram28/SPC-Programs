#include<stdio.h>
#include<conio.h>

void main(){
int a[5],i,largest,smallest;
clrscr();
printf("Enter array : ");
for(i=0;i<5;i++){
scanf("%d",&a[i]);
}
largest = a[0];
smallest = a[0];
for(i=1;i<5;i++){
if(a[i]>largest){
largest = a[i];
}
if(a[i]<smallest){
smallest = a[i];
}
}
printf("Largest : %d\nSmallest : %d",largest,smallest);
getch();
}