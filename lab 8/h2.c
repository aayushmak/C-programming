#include<stdio.h>
int main()
{
	FILE *f;
	char ch;
	printf("\Output Data\n");
	f=fopen("character.txt","r");
	while((ch=getc(f))!=EOF){
		putchar(ch);
	}
	fclose(f);
}
