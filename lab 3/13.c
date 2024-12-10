#include <stdio.h>
int main()
{
	int n,c,i,j;
	printf("enter a number: ");
	scanf("%d",&n);j=1;
	while(j<=n){
		c=0;
		i=1;
		while(i<=j){
			if(j%i==0){
			c++;
			}
			i++;
		}
	 	if(c==2){
		printf("%d\n",j);
		}
		j++;
	}
	printf("\nAayushma Kafle");
	return 0;
}
