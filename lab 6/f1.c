#include<stdio.h>
int main()
{

int n,*p;
printf("Aayushma Kafle\n");
p=&n;
n=7;
printf("The value of n:%d\n",n);
printf("The value of n:%d\n",*p);
printf("The address of n:%d\n",&n);
printf("The address of n:%d\n",p);

}
