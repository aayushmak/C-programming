#include <stdio.h>
int main()
{
	int a1[25],a2[25],i,n;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	printf("Enter the numbers:\n");
	for(i=0;i<n;i++){
		printf("a1[%d]:",i);
		scanf("%d",&a1[i]);
	}
	printf("Copying the elements:\n");
	for(i=0;i<n;i++){
		printf("a2[%d]=%d\n",i,a1[i]);
	}
	printf("Aayushma Kafle");
	return 0;
}
