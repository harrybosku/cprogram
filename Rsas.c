#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
    {
    
int a,n,num[100],i=0,n1=0,k,j,temp=0;
    printf("enter the number and enter the digits to be deleted\n");
    scanf("%d",&a);
    scanf("%d",&n);
    n1=a;
    if(a>0)
    {
    
    while(n1!=0)
        {
        num[i]=n1%10;
        n1=n1/10;
        i++;
    }
    for(j=0;j<=i;j++)
        {
        for(k=0;k<=i;k++)
            {
            if(num[j]<=num[k])
                {
                temp=num[j];
                num[j]=num[k];
                num[k]=temp;
            }
        }
    }
    n=i-n;
    for(i=0;i<n;i++)
        {
        printf("%d",num[i]);
    }
    }
    else
    {
        printf("error");
    }
    
return 0;
}
