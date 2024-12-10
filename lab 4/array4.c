#include <stdio.h>
int main()
{
	int n,i,small,a[25];
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	printf("Enter the numbers:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	small=a[0];
	for(i=0;i<n;i++){
		if(a[i]<small){
			small=a[i];
		}
	}
	printf("The smallest number is %d\n",small);
	printf("Aayushma Kafle");
	return 0;
}
