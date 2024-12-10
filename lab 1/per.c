#include <stdio.h>
int main()
{
	float a,b,c,d,e,sum,pr,t;
	printf("Enter the marks of subject 1,2,3,4,5 respectively:");
	scanf("%f %f %f %f %f",&a,&b, &c, &d, &e);
	printf("Enter total marks:");
	scanf("%f",&t);
	sum=a+b+c+d+e;
	pr=(sum/t)*100;
	printf("Percentage= %f\n",pr);
	printf("Aayushma Kafle");
	return 0;
}
