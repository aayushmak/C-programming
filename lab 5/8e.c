#include <stdio.h>
int Reverse(int n);
int main()
{
	int n,a;
	printf("Enter a number:\n");
	scanf("%d",&n);
	a=Reverse(n);
	printf("The reversed number is %d",a);
}
int Reverse(int n)
{
	int rev,rem;
	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	return(rev);	
}
