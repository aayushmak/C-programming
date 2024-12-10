#include <stdio.h>
int main()
{
	int n,i=1,c=0;
	printf("enter a number: ");
	scanf("%d",&n);
	printf("Factors:\n");
	while(i<=n){
		if(n%i==0){
			printf("%d\t",i);
			c++;
		}
		i++;
	}       
	printf("\nCount: %d\n",c);
	printf("Aayushma Kafle");
	return 0;                                                                                                             
}
