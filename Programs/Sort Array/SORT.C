#include<stdio.h>
#include<conio.h>

void main(){
int a[5],i,j,temp;
clrscr();
printf("Enter array : ");
for(i=0;i<5;i++){
scanf("%d",&a[i]);
}
for(i=0;i<5;i++){
	for(j=0;j<5;j++){
		if(a[i] < a[j]){
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
		}
	}
}
printf("Sorted array is : ");
for(i=0;i<5;i++){
printf("%d ",a[i]);
}
getch();
}