#include <stdio.h>
int main()
{
	float p,t,r,si;
	printf("Enter the principle, time and rate respectively:");
	scanf("%f %f %f",&p,&t,&r);
	si=(p*t*r)/100;
	printf("The simple interest is %f\n",si);
	printf("Aayushma Kafle");
	return 0;
}
