#include<stdio.h>
void function(int m,int n,int xx[])
{
    int i=m+1,k=2,j=0;
    for(i;j<=n;i++)
    {
        for(k;k<=i/2;k++)
        {
            if(i%k==0)
            {
                break;
            }
        }
        xx[j]=i;
        j++;
    }
}

int main()
{
    int m,n,ss[100];
    printf("enter 2 num:");
    scanf("%d%d",&m,&n);
    function(m,n,ss);
    for(int i=0;i<n;i++)
    {
        printf("%d ",ss[i]);
    }
    
}