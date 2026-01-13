//函数 fun 的功能是：
//从字符串 t 中找出所有不在字符串 s 中出现的字符，
//按它们在 t 中出现的顺序存放在字符串 u 中，
//并在 u 的末尾加上字符串结束符 '\0'。

#include <stdio.h>
#include <string.h>
void fun (char  *s, char  *t, char *u)
{   int   i, j, sl, tl, k, ul=0;
    sl = strlen(s);    tl = strlen(t);
    for (i=0; i<tl; i++)
    {   for (j=0; j<sl; j++)
            if (t[i] == s[j])  break;//跳出之后直接进入if，if不符合的话，回到最外层的for
        if (j>=sl) //作用是：判断字符 t[i] 是否 完全不在 字符串 s 中，因为都能跑完一遍整个长度了
        {   //说明 t[i] 不在 s 中，接下来要看 u 里有没有这个字符
            //如果 u 里没有，就把它加进去
            //如果 u 里有，就跳过它
            //所以要遍历 u 看看有没有 t[i]
            for (k=0; k<ul; k++)
                if (t[i] == u[k]) break;
            if (k>=ul)//说明 t[i] 在 u 中也没有出现过
               u[ul++] = t[i];
        }
    }
    u[ul]='\0';
}
int main()
{   char   s[100], t[100], u[100];
    printf("\nPlease enter string s:"); scanf("%s", s);
    printf("\nPlease enter string t:"); scanf("%s", t);
    fun(s, t, u);
    printf("The result is: %s\n", u);
    return 0;
}

//遍历 t 的每个字符；
//先查它是否在 s 中（在就扔掉）；
//不在 s 中？再查它是否已经放进 u 了（重复就跳过）；
//都通过？就把它加到 u 末尾。
//最后给 u 加个 \0 结尾。

//第一关（查黑名单）：这个字符在 s 里吗？
//→ 在？❌ 直接淘汰！
//→ 不在？✅ 进入下一关。
//第二关（查是否已放行）：这个字符已经放进 u 了吗？
//→ 已经有了？❌ 重复了，不要！
//→ 还没有？✅ 可以放行！
//放行：把这个字符加到 u 的末尾。
//最后，给 u 加个句号（\0），告诉别人：“到这里就结束了”。