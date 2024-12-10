 #include<stdio.h>

int FindFactorial(int);
int main()
{
	int f;
	int a;
	printf("Enter a number:\n");
	scanf("%d",&a);
	f=FindFactorial(a);
	printf("%d",f);
}
int FindFactorial(int a)
{
	if(a<=1){
		return(1);
	}else{
		return(a*FindFactorial(a-1));
	}
	
}
