#include<stdio.h>
int main(){
    int a=100;
    int *p=&a;
    int **q=&p;
    printf("%p\n",*q);
    printf("%d\n",**q);
    printf("%p",&a);
    return 0;
}