#include <stdio.h>
int main()
{
    int arr[]={99,94,95,93,91,91,98,88,97,89}; //这里有十个元素
    int i,j;
    for(i=0;i<10;i++)
    {
        if(i != 9)
            printf("%d, ",arr[i]);
        else
            printf("%d",arr[i]);
    }
    for(i=8;i>=0;i--) //控制每趟比较的最大下标
    {
        for(j=0;j<=i;j++) //控制每次相邻元素比较的下标
        {
            if(arr[j]>arr[j+1]) //如果左边元素比右边元素大，则交换
            {
                int temp;
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\n---排序之后---\n");
    for(i=0;i<10;i++)
    {
        if(i != 9)
            printf("%d, ",arr[i]);
        else
            printf("%d",arr[i]);
    }
    return 0;
}