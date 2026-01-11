#include <conio.h>
#include <stdio.h>

// 函数功能：判断两个整数m和n是否互质（即最大公约数为1）
// 参数：m, n - 要判断的两个整数
// 返回值：1表示互质，0表示不互质
int IsThat(int m, int n)
{
    int k, t, mk = 1;  // mk初始为1，假设互质
    
    t = m;  // 先假设m较小
    if (m > n) 
        t = n;  // 取m和n中较小的数作为循环上限t
    
    for (k = 2; k <= t; k++)  // 修改：k=1 改为 k=2
    {
        // 如果m和n都能被k整除，说明有公共因子
        if (m % k == 0 && n % k == 0)
        {
            mk = 0;  // 标记为不互质
            break;   // 找到一个公因子即可确定不互质，跳出循环
        }
    }
    
    return (mk);  // 返回判断结果：1互质，0不互质
}

int main()
{
    int m, n;
    
    printf("\nPlease enter 2 numbers:\n");
    
    

    scanf("%d %d", &m, &n);  // 修改："&d &d" 改为 "%d %d"
    
    // 调用函数判断是否互质
    if (IsThat(m, n))
        printf("Yes\n");  // 互质输出Yes
    else
        printf("No\n");   // 不互质输出No
    
    return 0;
}
