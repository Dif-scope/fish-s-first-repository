#include <conio.h>
#include <stdio.h>
#include <string.h>
int MySearch( char* str, char* s )//应当输入两个地址
{
   char* p;
   int n =0;
   for( ; *str; )//*str指向的字符串不为零时，继续循环

    if( ( p = strstr( str, s ) ) != NULL )
      { n++; str=p+1; }
    else

       break;

    return( n);
}
int main( )
{
   char str1[81], str2[21];
   printf("\nPlease enter str1 :");
   gets(str1);
   printf("\nplease enter str2 :");
   gets(str2);
   printf( "\n\n\"%s\" are(is) appeared in str1 %d times\n", str2, MySearch(str1, str2));
   return 0;
}
