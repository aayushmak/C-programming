#include <stdio.h>
int main()
{
	int a[25],n,i;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	printf("Enter the numbers:\n");
	for(i=0;i<n;i++){
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("Reversing the array:\n");
	for(i=n-1;i>=0;i--){
		printf("a[%d]:%d\n",i,a[i]);
	}
	printf("Aayushma Kafle");
	return 0;
}
