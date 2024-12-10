#include <stdio.h>
int main()
{
	int i=5,j=1;
	while(i>=1){
		j=1;
		while(j<=i){
			printf("%d",i);
			j++;
		}
		printf("\n");
		i--;
	}
	printf("Aayushma Kafle");
	return 0;
}
