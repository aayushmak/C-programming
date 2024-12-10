#include<stdio.h>
int main(){

int a,*p,**ptr;
printf("Aayushma Kafle\n");
a=9;
p=&a;
ptr=&p;
printf("The value of a:%d\n",**ptr);
printf("The value of a:%d\n",*p);
printf("The value of a:%d\n",a);
printf("The address of a:%d\n",*ptr);
printf("The address of a:%d\n",p);
printf("The address of a:%d\n",&a);
}
