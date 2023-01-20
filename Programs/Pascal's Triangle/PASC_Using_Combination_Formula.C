#include<stdio.h>
#include<conio.h>

int getFac(int a);
int getComb(int a , int b);

void main(){
int num,i,j,spaces;
clrscr();
printf("Enter number of rows : ");
scanf("%d",&num);
for(i=0;i<=num;i++){
	for(spaces=num-i;spaces>0;spaces--){
	printf(" ");
	}
	for(j = 0;j<=i;j++){
	printf("%d ",getComb(i,j));
	}
	printf("\n");
}
getch();
}

int getFact(int a){
int i,fact=1;
for(i=1;i<=a;i++){
fact*=i;
}
return fact;
}
int getComb(int a, int b){
int comb;
comb = getFact(a)/(getFact(b)*getFact(a-b));
return comb;
}