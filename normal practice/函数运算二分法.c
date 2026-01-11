#include "stdio.h"
#include "math.h"

// 函数funx：计算方程 f(x) = 2x³ - 4x² + 3x - 6 的值
double funx(double x)
{ 
    return(2*x*x*x - 4*x*x + 3*x - 6); 
}

// 函数fun：用二分法求方程的根
// 参数：m, n - 初始区间端点
// 返回值：方程的近似根
double fun(double m, double n)
{ 
    double r;  // 修改1：将int改为double，二分法的中点应为浮点数
    r = (m + n) / 2;
    
    // 修改2：循环条件应为 fabs(n-m) >= 0.001
    // 当区间长度大于等于误差限时继续迭代
    while(fabs(n - m) >= 0.001)
    { 
        // 根据中点和右端点的函数值乘积判断根所在的区间
        if(funx(r) * funx(n) < 0) 
            m = r;  // 根在[r, n]区间，更新左端点
        else 
            n = r;  // 根在[m, r]区间，更新右端点
        
        r = (m + n) / 2;  // 重新计算中点
    }
    return r;  // 返回近似根
}

main()
{ 
    double m, n, root;
    printf("Enter m n : \n"); 
    scanf("%lf%lf", &m, &n);
    root = fun(m, n);
    printf("root = %6.3f\n", root);
}
