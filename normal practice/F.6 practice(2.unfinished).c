//判断一个字符串是不是回文字符串(自我版本,未完成) 

#include<stdio.h>
#include<string.h>
 //用函数指针，构建一个process函数，完成对字符串内容的比较
int process(char* p,char* q)
{

}

//预处理输入的字符串，让指针分别指向字符串的头和尾，然后进入process（判定）函数
void pre_judge(char *buffer,int size)
{
	if(fgets(buffer,size,stdin)!=NULL)//接收传入的字符串，给到buffer，然后处理掉\n
	{
		buffer[strcspn(buffer,"\n")]='\0';
	}
	printf("your input:");
	size_t tail=strlen(buffer);//获取字符串长度
	char *p=&buffer[0],*q=&buffer[tail];
	while(p<q)
	{
		process()
	}
	
	 
	
}

int main()
{
	char input[30];//这里未来想用malloc函数优化掉
	printf("input string:\n");
	pre_judge(input,30);//这里的30 作为size，太膈应了
	
}
