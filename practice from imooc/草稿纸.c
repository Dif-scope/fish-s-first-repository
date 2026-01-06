#include <stdio.h>

int main() {
    char *countries[] = {
        "China",          // 短字符串
        "United States",  // 长字符串
        "Japan",          // 短字符串
        "Germany"         // 中长字符串
    };
    
    printf("=== 验证：指针数组存储的是地址 ===\n\n");
    
    // 1. 查看每个元素的值（地址）
    for(int i = 0; i < 4; i++) {
        printf("countries[%d] 的值（地址）: %p\n", 
               i, (void*)countries[i]);
    }
    
    printf("\n=== 这些地址指向的字符串 ===\n");
    
    // 2. 通过地址访问字符串
    for(int i = 0; i < 4; i++) {
        printf("地址 %p 处的字符串: \"%s\"\n", 
               (void*)countries[i], countries[i]);
    }
    
    printf("\n=== 地址之间的差值（字符串长度+1） ===\n");
    
    // 3. 验证地址差值与字符串长度的关系
    for(int i = 1; i < 4; i++) {
        long diff = (char*)countries[i] - (char*)countries[i-1];
        printf("countries[%d] - countries[%d] = %ld 字节\n", 
               i, i-1, diff);
    }
    
    return 0;
}