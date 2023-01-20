#include<stdio.h>
#include<conio.h>

void main(){
int num,i,j,spaces,c;
clrscr();
printf("Enter number of rows : ");
scanf("%d",&num);
for(i=0;i<=num;i++){
	for(spaces=num-i;spaces>0;spaces--){
	printf(" ");
	}
	for(j = 0;j<=i;j++){
	if(i ==0 ||j==0){
	c = 1;
	}
	else{
	c = c*(i-j+1)/j;
	}
	printf("%d ",c);
	}
	printf("\n");
}
getch();
}