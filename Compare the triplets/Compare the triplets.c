#include <assert.h>
#include <ctype.h>
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
int a[3],b[3],n,i,sumofa=0,sumofb=0;
for(i=0;i<3;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<3;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<3;i++)
{
    if(a[i]>b[i])
    {
     sumofa+=1;
    }
    else if(a[i]<b[i])
    {
     sumofb+=1;
    }
}

    printf("%d %d",sumofa,sumofb);

return 0;
}

