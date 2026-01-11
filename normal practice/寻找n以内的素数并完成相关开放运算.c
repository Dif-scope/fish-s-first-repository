#include <math.h>
#include <stdio.h>
//其功能是：计算并输出3到n之间所有素数的平方根之和。
double fun(int n)
{
    double sum = 0.0;
    int i, j, is_prime;
    
    for(i = 3; i <= n; i++) 
    {
        is_prime = 1;
        for(j = 2; j <= sqrt(i); j++)       //为什么只检查到√i？如果 i 不是素数，那么它可以表示为：i= a
                                            //· 至少有一个因子 ≤ √i
                                            //· 检查到√i就能找到所有可能的因子
        {
            if(i % j == 0)                  /*如果取余不等于零，就会继续往下核实*/
            {
                is_prime = 0;  
                break;                      
            }
        }
        if(is_prime) //break 到这里来       //如果核实到最后也没有发现，会因为 j <= sqrt(i)条件抛出循环，执行这里的代码
            sum += sqrt(i);
    }
    return sum;
}

main()
{
    int n;
    double sum;
    printf("\n\nInput n: ");
    scanf("%d", &n);
    sum = fun(n);
    printf("\n\nsum=%f\n\n", sum);
}
