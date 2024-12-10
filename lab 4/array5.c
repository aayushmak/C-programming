#include <stdio.h>
int main()
{
	int e=0,o=0,a[50],i,n;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	printf("Enter the numbers:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			e=e+a[i];
		}else{
			o=o+a[i];
		}
	}
	printf("The sum of even numbers is %d\n",e);
	printf("The sum of odd numbers is %d\n",o);
	printf("Aayushma Kafle");
	return 0;
}
