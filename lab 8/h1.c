#include <stdio.h>
int main()
{
	FILE *f;
	char ch;
	printf("\nInput Data=");
	f=fopen("character.txt","w");
	while((ch=getchar())!=EOF){
		putc(ch,f);
	}
	fclose(f);
}
