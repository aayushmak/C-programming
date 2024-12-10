#include<stdio.h>
int main()
{
	FILE *fp;
	int n;
	fp=fopen("calculation.txt","r");
	printf("\nThe numbers are:");
	while((n=getw(fp))!=EOF){
		if(n%2==0){
		printf("%5d",n);
		}
	}
	fclose(fp);
	
}
