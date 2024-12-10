#include <stdio.h>
int main()
{
	int i=1,j=1;
	while(i<=5){
		i=1;
		while(j>=i){
			printf("%d",i);
			i++;
		}
		printf("\n");
		j++;
	}
	printf("\nAayushma Kafle");
	return 0;
}
