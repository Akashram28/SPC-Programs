#include<stdio.h>
#include<conio.h>

void main(){
int num,i,j,count=1;
clrscr();
printf("Enter number of rows : ");
scanf("%d",&num);
for(i=1;i<=num;i++){
	for(j=1;j<=i;j++){
		printf("%d ",count);
		count+=1;
	}
	printf("\n");
}
getch();
}