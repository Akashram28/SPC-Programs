#include<stdio.h>
#include<conio.h>

void check_palindrome(char [], int);

void main(){
int len=0,i;
char str[20];
clrscr();
printf("Enter string : ");
gets(str);
for(i=0;str[i] != '\0';i++){
len++;
}
check_palindrome(str,len);
getch();
}

void check_palindrome(char str[],int len){
int i;
for(i=0;i<len;i++){
if(str[i] != str[len-i-1]){
	printf("Not a palindrome");
	break;
}
else if(i==len-1){
	printf("It is palindrome");
}
}
}