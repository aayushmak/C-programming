#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c){
		printf("%d is maximum",a);
	}else if(b>c&&b>a){
		printf("%d is maximum",b);
	}else{
		printf("%d is maximum",c);
	}
	printf("\nAayushma Kafle");
	return 0;
}
