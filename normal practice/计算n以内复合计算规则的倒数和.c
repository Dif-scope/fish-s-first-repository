#include <conio.h>
#include <stdio.h>
float fun(float n)
{
    float sum = 0.0;
    int i;
    for(i = 1; i <= n; i++) {
        if(i % 5 == 0 || i % 9 == 0) {
            sum += 1.0 / i;
        }
    }
    return sum;
}
main()
{
    float a;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("The original data is: ");
    printf("%f\n\n", a);
    printf("The result :%f\n", fun(a));
}
