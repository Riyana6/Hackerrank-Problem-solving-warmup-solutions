#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=i;j<n;j++)
       {
           printf(" ");
       }
       for(j=1; j<=i; j++)
        {
            printf("#");
        }
       printf("\n");

    }
    
    return 0;
}
