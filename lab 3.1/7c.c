#include <stdio.h>
int main()
{
	int p1,p2,i,c;
	p1=30000;
	p2=100000;
	for(c=0;p1<p2;c++)
	{
		p1=p1*0.05+p1;
		p2=p2-(p2*0.1);

	}
	printf("The number of years is %d",c);
	return 0;
}
