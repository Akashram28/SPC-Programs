#include<stdio.h>
#include<conio.h>

void main(){
int a[5][5],b[5][5],c[5][5],i,j,k,r1,r2,c1,c2,sum=0;
clrscr();
printf("Enter row, column of matrix 1 : ");
scanf("%d%d",&r1,&c1);
printf("Enter elements of matrix 1 : \n");
for(i=1;i<=r1;i++){
	for(j=1;j<=c1;j++){
		printf("%d,%d : ",i,j);
		scanf("%d", &a[i-1][j-1]);
	}
}

printf("Enter row, column of matrix 1 : ");
scanf("%d%d",&r2,&c2);
printf("Enter elements of matrix 2 : \n");
for(i=1;i<=r2;i++){
	for(j=1;j<=c2;j++){
		printf("%d,%d : ",i,j);
		scanf("%d", &b[i-1][j-1]);
	}
}
printf("Multiplication of the two matrices is : \n");
for(i=1;i<=r1;i++){
	for(j=1;j<=c1;j++){
		for(k=1;k<=r1;k++){
			sum += (a[i-1][k-1]*b[k-1][j-1]);
		}
		c[i-1][j-1] = sum;
		sum=0;
		printf("%d ",c[i-1][j-1]);
	}
	printf("\n");
}
getch();
}