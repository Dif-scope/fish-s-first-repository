#include<stdio.h>
float everyk = 2.3;
int road;
int oroad=0;
int origin = 14;
int hour;
int minute;
int up = 23*60;
int low = 5*60;
int total_time;
int total_price;
int main()
{   
    printf("how far?:");
    scanf("%d",&road);
    while (getchar() != '\n');
    printf("what time is it ?,plaese input in HH:MM format:");
    

    if(scanf("%d:%d",&hour,&minute) != 2)//输入侦测二合一
    {
        printf("wrong format!");
        return 1;
    }

    if(hour<0||hour>23)
    {
        printf("wrong scale!");
        return 1;
    }

    if(minute<0||minute>=60)
    {
        printf("wrong scale!");
        return 1;
    }

    hour=hour*60;
    total_time=hour+minute;
    if(total_time>=up||total_time<low)
    {
        printf("you are in the 120%% on prince.\n");
        everyk*=1.2;
    }
    else
    {
        printf("normal caculatin model\n");

    }

    if(road>3)
    {
        oroad=road-3;
    }

        
    printf("please pay %d yuan",total_price=origin+oroad*everyk);
    
        
    return 0;
}
    
