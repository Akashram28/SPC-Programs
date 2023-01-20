#include<stdio.h>
#include<conio.h>

void main(){
int num1,num2,count=0,i,j;
clrscr();
printf("Enter two numbers (num1 < num2) : ");
scanf("%d%d", &num1,&num2);
for(i=num1;i<num2;i++){
	for(j=2;j<i;j++){
		if(i%j == 0){
			break;
		}
		else if(j == i-1){
			count+=1;
		}
	}
}
printf("Number of prime numbers between %d and %d are %d", num1,num2,count);
getch();
}

