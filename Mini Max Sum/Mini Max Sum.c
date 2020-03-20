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
    long long int i,a[5];
    long long int sum1,sum2,sum3,sum4,sum5,max,min;

    for(i=0;i<5;i++)
    {
        scanf("%lld",&a[i]);
    }
    
    
    sum1=a[0]+a[1]+a[2]+a[3];//4
    sum2=a[0]+a[1]+a[2]+a[4];//3
    sum3=a[0]+a[1]+a[4]+a[3];//2
    sum4=a[0]+a[4]+a[2]+a[3];//1
    sum5=a[4]+a[1]+a[2]+a[3];//0
   
    
    
    if(sum1>sum2&&sum1>sum3&&sum1>sum4&&sum1>sum5)
    {
        max=sum1;
    }
    else if(sum2>sum1&&sum2>sum3&&sum2>sum4&&sum2>sum5)
    {
        max=sum2;
    }
    else if(sum3>sum1&&sum3>sum2&&sum3>sum4&&sum3>sum5)
    {
        max=sum3;
    }
    else if(sum4>sum1&&sum4>sum2&&sum4>sum3&&sum4>sum5)
    {
        max=sum4;
    }
    else 
    {
        max=sum5;
    }

    if(sum1<sum2&&sum1<sum3&&sum1<sum4&&sum1<sum5)
    {
        min=sum1;
    }
    else if(sum2<sum1&&sum2<sum3&&sum2<sum4&&sum2<sum5)
    {
        min=sum2;
    }
    else if(sum3<sum1&&sum3<sum2&&sum3<sum4&&sum3<sum5)
    {
        min=sum3;
    }
    else if(sum4<sum1&&sum4<sum2&&sum4<sum3&&sum4<sum5)
    {
        min=sum4;
    }
    else
    {
        min=sum5;
    }
   
   
     
    printf("%lld %lld",min,max);
    return 0;
}
