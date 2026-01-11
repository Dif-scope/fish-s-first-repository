#include <stdio.h>

int fun(int n)
{
    int sum=0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    return sum;
}

main()
{
    int n, sum;
    printf("Input n: ");
    scanf("%d", &n);
    sum = fun(n);
    printf("sum=%d\n", sum);
}
