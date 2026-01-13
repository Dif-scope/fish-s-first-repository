//函数 int MyDelete(char *str, char c) 的功能是：
//删除字符串 str 中所有等于字符 c 的字符
//返回被删除的字符个数
//原地修改字符串（in-place）

#include <conio.h>
#include <stdio.h>
int MyDelete( char* str, char c )
{
   int i, j=0, k=0;
   for( i = 0; str[i]; i++ )
      if( str[i] != c )

      {  str[ j ]= str[i];  j++;   }
      else
        k++;

   str[j]='\0';

   return( k );
}
main()
{
   char string[81], x;
   printf("\nPlease enter a string:\n");
   gets(string);
   printf("\nPlease enter a character: ");
   scanf("%c", &x );
   printf( "\n\nAfter deleting %d '%c'(s), the string becomes:\n%s\n",MyDelete(string, x), x, string);
}


//它根本没有“删除”任何内存，而是用双指针将需要保留的字符依次向前覆盖，原地重构字符串。
//整个过程只操作原始数组本身，不使用额外空间——读指针 i 遍历原串，写指针 j 构建新串，二者在同一个数组中“错位移动”。
//最后在新串末尾写入 \0 截断，使后续残留字符不可见，从而实现“逻辑删除”，并返回跳过的字符数量作为删除
//以及，缺点是它只能删除单个字符，不能删除字符串或更复杂的模式。