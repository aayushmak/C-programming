#include <stdio.h>
int main()
{
	FILE *fp;
	int n,i=0,s=0;
	fp=fopen("calculation.txt","w");
	printf("Input numbers:");
	while(i<5){

		scanf("%d",&n);
		putw(n,fp);
		i++;
	}
	fclose(fp);
	fp=fopen("calculation.txt","r");
	printf("\nThe numbers are:");
	while((n=getw(fp))!=EOF){
		printf("%5d",n);
		s=s+n;
	}
	fclose(fp);
	printf("\nSum:%d",s);
}
