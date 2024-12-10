#include <stdio.h>
int main()
{
	int i,c=0;
	for(i=1;i<=1000;i++)
	{
		if(i%4==0){
			c=i+c;
		}
	}
	printf("The sum is %d",c);
	printf("\nAayushma Kafle");
	return 0;
}
