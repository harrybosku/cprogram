#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
    {
    
char a[1000];
    int b[26]={0},flag=0,i,n;
    scanf("%[^\n]s",a);
    int num=0;
    num=strlen(a);
   
    for(i=0;i<num;i++)
        {
        if(a[i]>=65&&a[i]<=90)
            {
            b[a[i]-65]++;
        }
        else if(a[i]<123&&a[i]>=97)
            {
            b[a[i]-97]++;
        }
    }
    for(i=0;i<26;i++)
        {
        
        if(b[i]==0)
          {  flag=1;
            break;
          } 
    }
    if(flag==0)
        {
        printf("yes it is pangram");
    }
    else
        {
        printf("no its not pangram");
    }
    return 0;
}
