#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
clrscr();
printf("Enter number : ");
scanf("%d" , &n);
for(i = 1;i<=n;i++){
if(i == 5){
continue;
}
printf("%d\n",i*i);
}
i = 1;
do{
printf("%d\n",i*i);
i++;
}
while(i<=n);
getch();
}
