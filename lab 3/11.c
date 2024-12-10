#include <stdio.h>
int main()
{
	
	int a,b,n,m,lcm;
	printf("enter any two numbers; ");
	scanf("%d  %d",&a,&b);
	n=a,m=b;
	while(a!=b){
		if(a>b){
			a-=b;
		}else{
			b-=a;
		}
	}
	lcm=(n*m)/a;
	printf("lcm= %d\n",lcm);
	printf("Aayushma Kafle");
	return 0;
}

