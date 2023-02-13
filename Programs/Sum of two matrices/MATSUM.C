#include<stdio.h>
#include<conio.h>

void main(){
int a[5][5],b[5][5],c[5][5],r1,r2,c1,c2,i,j;
clrscr();
printf("Enter number of rows, columns of Matrix 1 : ");
scanf("%d%d",&r1,&c1);
for(i=0;i<r1;i++){
	for(j=0;j<c1;j++){
		printf("%d,%d : ",i,j);
		scanf("%d",&a[i][j]);
	}
}
printf("Enter number of rows, columns of Matrix 2 : ");
scanf("%d%d",&r2,&c2);
for(i=0;i<r2;i++){
	for(j=0;j<c2;j++){
		printf("%d,%d : ",i,j);
		scanf("%d",&b[i][j]);
	}
}
printf("Sum of two arrays  : \n");
for(i=0;i<r1;i++){
	for(j=0;j<c1;j++){
		c[i][j] = a[i][j] + b[i][j];
		printf("%d " ,c[i][j]);
	}
	printf("\n");
}
getch();
}