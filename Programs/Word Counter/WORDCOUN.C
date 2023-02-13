#include<conio.h>
#include<stdio.h>

void main(){
int spaces = 0, words = 1, lines = 1,letters=0,i,count=0;
char str[50];
clrscr();
printf("Enter string : ");
scanf("%[^~]", str);
for(i=0;str[i]!= '\0';i++){
count++;
}
printf("Count : %d\n",count );
for(i=0;i<count;i++){
	if(str[i] == ' ' || str[i] == '\t'){
		words++;
		spaces++;
	}
	else if(str[i] == '\n'){
		lines++;
		words++;
	}
	else{
		letters++;
	}
}
printf("Spaces : %d, Characters : %d, Words : %d, Lines : %d",spaces,letters,words,lines);
getch();
}