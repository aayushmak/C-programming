#include <stdio.h>
int  disp( int *num)
{
    printf("%d ", *num);
}

int main()
{
    int i;
	 int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
     for(i=0; i<10; i++)
     {
        
         disp (&arr[i]);
     }
     printf("Aayushma Kafle\n");

     return 0;
}
