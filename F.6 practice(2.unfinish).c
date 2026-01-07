//判断一个字符串是不是回文字符串(教科书版本,未完成) 

#include<stdio.h>
#include<string.h>
 
void judge(char *buffer,int size)
{
	if(fgets(buffer,sizeof,stdin)!=NULL)
	{
		buffer[strcspn(buffer,"\n")]='\0';
	}
	printf("your input:");
	char *p,*q
	 
	
}

int main()
{
	char input[30];
	printf("input string:\n")
	judge(input,30);
	
}
