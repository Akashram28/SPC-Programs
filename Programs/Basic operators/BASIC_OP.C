#include<stdio.h>
#include<conio.h>
void main(){
char c;
long int  num1,num2;
//long int sum,product,diff,div,mod;
clrscr();
scanf("%ld%ld", &num1,&num2);
/*
sum=num1+num2;
diff = num1-num2;
product = num1*num2;
div=num1/num2;
mod=num1%num2;
printf("Sum is  %ld\n" , sum);
printf("Difference is %ld\n" , diff);
printf("Mod is  %ld\n" , mod);
printf("Product is %ld\n",product);
printf("Division is %ld\n", div);
*/
if(num1 > num2){
printf("num1 is greater than num2");
}
else if(num1<num2){
printf("num1 is smaller than num2");
}
else{
printf("num1 is equal to num2");
}
getch();
}