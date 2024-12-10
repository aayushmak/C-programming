#include <stdio.h>
int main()
{
	int a,b;
	printf("enter any two numbers; ");
	scanf("%d  %d",&a,&b);
	while(a!=b){
		if(a>b){
			a-=b;
		}else{
			b-=a;
		}
	}
	printf("hcf= %d\n",a);
	printf("Aayushma Kafle");
	return 0;
}
