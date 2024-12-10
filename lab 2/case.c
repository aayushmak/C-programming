#include <stdio.h>
int main()
{
	float r,l1,l2,b,n,m,area,pi=3.14,sum;
	int ch;
	printf("1.Area of circle\n 2.Area of square\n 3.Area of rectangle\n 4.Sum of floating two numbers\n");
	printf("Choose your option");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("Enter radius:");
			scanf("%f",&r);
			area=pi*r*r;
			printf("Area of circle is %f",area);
			break;
		case 2:
			printf("Enter length:");
			scanf("%f",&l1);
			area=l1*l1;
			printf("Area of square is %f",area);
			break;
		case 3:
			printf("Enter length and breadth:");
			scanf("%f %f",&l2,&b);
			area=l2*b;
			printf("Area of rectangle is %f",area);
			break;
		case 4:
			printf("Enter any two numbers:");
			scanf("%f %f",&m,&n);
			sum=m+n;
			printf("The sum of two floating number is %f",sum);
			break;
		default:
			printf("choose from 1 to 4\n");
			break;
	}
	printf("\nAayushma Kafle");
	return 0;
}
