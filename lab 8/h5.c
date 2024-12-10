#include <stdio.h>
int main()
{
	FILE *f;
	char ch;
	printf("\nInput Data=");
	f=fopen("data.txt","w");
	while((ch=getchar())!=EOF){
		putc(ch,f);
	}
	fclose(f);
	printf("\nOutput data=");
	f=fopen("data.txt","r");
	while((ch=getc(f))!=EOF){
		putchar(ch);
	}
	fclose(f);
}
