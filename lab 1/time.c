#include <stdio.h>
int main()
{
	int sec,h,m,s;
	printf("Enter time in seconds:");
	scanf("%d",&sec);
	h=(sec/3600);
	m=(sec-(3600*h))/60;
	s=sec-(3600*h)-(m*60);
	printf("Hour:Minute:second = %d:%d:%d",h,m,s);
	printf("\nAayushma Kafle");
	return 0;
}
