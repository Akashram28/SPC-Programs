#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
char str[50],sub[10];
int i,j;
clrscr();
printf("Enter string : ");
gets(str);
printf("Enter substring : ");
gets(sub);
for(i=0;i<strlen(str);i++){
	if(str[i]==sub[0]){
		for(j=0;j<strlen(sub);j++){
			if(str[i+j] != sub[j]){
				break;
			}
			else if(j==strlen(sub)-1){
				printf("Substring exists");
				i = strlen(str);
				j = strlen(sub);
			}
		}
	}
	else if(i==strlen(str)-1){
		printf("Substring does not exist");
	}
}
getch();
}