#include <stdio.h>
    void main()
    {
 
        int i, j, a, n, num[5];
        printf("Enter the numbers \n");
        for (i = 0; i < 5; ++i)
            scanf("%d", &num[i]);
 
        for (i = 0; i < 5; ++i) 
        {
            for (j = i + 1; j < 5; ++j)
            {
                if (num[i] > num[j]) 
                {
 
                    a =  num[i];
                    num[i] = num[j];
                    num[j] = a;
 
                }
 
            }
 
        }
 
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < 5; ++i)
            printf("%d\n", num[i]);
            
 
    }

