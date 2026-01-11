#include <stdio.h>

// 全局变量声明
int cnt,sum;  // cnt: 满足条件的整数I的个数，sum: 这些I的总和

// 判断素数的函数
int isPrime(int number)
{
    int i,tag=1;  // tag=1表示是素数，0表示不是素数
    
    // 1不是素数
    if(number==1) return 0;
    
    // 检查2到number/2之间的数是否能整除number
    for(i=2;tag&&i<=number/2;i++)
        
        if(number%i==0) tag=0;  // 如果能整除，则不是素数
    
    return tag;  // 返回判断结果：1是素数，0不是素数
}

// 主计算函数：找出满足条件的I
void countValue()
{
    int I,count=0,xx[30];  // I: 循环变量，count: 素数个数，xx: 存储素数的数组
    int j,k,m;             // 未使用的变量
    
    // 初始化全局变量
    cnt=0;  // 重置满足条件的I个数
    sum=0;  // 重置满足条件的I总和

    // 遍历1到90的所有整数（因为I+10要≤100，所以I最大为90）
    for(I=1;I<=90;I++)
        // 如果I是素数，将其存入xx数组
        if(isPrime(I)) {xx[count]=I;count++;}
    
    // 遍历所有找到的素数
    for(I=0;I<count;I++)
        // 检查条件：I+4和I+10是否也都是素数
        if (isPrime(xx[I]+4)&&isPrime(xx[I]+10))
  
        {
            // 如果满足条件，则计数并累加
            cnt++;          // 满足条件的I个数加1
            sum+=xx[I];     // 将当前I加到总和中
        }
}

// 主函数
void main()
{
    // 初始化全局变量（冗余初始化，已在countValue中初始化）
    cnt=sum=0;
    
    // 调用计算函数
    countValue();
    
    // 输出结果
    printf("cnt=%d\n",cnt);  // 输出满足条件的I个数
    printf("sum=%d\n",sum);  // 输出这些I的总和
}
