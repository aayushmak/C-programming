#include <stdio.h>
int main()
{
	int n,i,a[25],sum=0,avg=0;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	printf("Enter the numbers:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("The average is %d\n",avg);
	printf("Aayushma Kafle");
	return 0;
}
