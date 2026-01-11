#include <stdio.h>
#include <string.h>

// 1. 设计图书模板
typedef struct Book {
    char title[50];   // 书名
    char author[30];  // 作者
    float price;      // 价格
    int pages;        // 页数
} Book;

int main() {
    // 2. 创建3本书
    Book books[3];
    
    // 3. 输入每本书的信息
    for(int i = 0; i < 3; i++) {
        printf("\n请输入第%d本书的信息：\n", i+1);
        
        printf("书名：");
        fgets(books[i].title, 50, stdin);
        books[i].title[strcspn(books[i].title, "\n")] = '\0';
        
        printf("作者：");
        fgets(books[i].author, 30, stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0';
        
        printf("价格：");
        scanf("%f", &books[i].price);
        
        printf("页数：");
        scanf("%d", &books[i].pages);
        
        getchar();  // 吸收多余的换行符
    }
    
    // 4. 显示所有图书
    printf("\n=== 图书列表 ===\n");
    for(int i = 0; i < 3; i++) {
        printf("\n第%d本书：\n", i+1);
        printf("  书名：%s\n", books[i].title);
        printf("  作者：%s\n", books[i].author);
        printf("  价格：%.2f元\n", books[i].price);
        printf("  页数：%d页\n", books[i].pages);
    }
    
    return 0;
}
