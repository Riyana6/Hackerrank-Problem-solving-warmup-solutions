#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,a[100];
    float count1,count2,count3;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>0)
        {
            count1++;
        }
        else if(a[i]<0)
        {
            count2++;
        }
        else
        {
            count3++;
        }
    }
    printf("%f\n",count1/n);
    printf("%f\n",count2/n);
    printf("%f",count3/n);
    return 0;
}
