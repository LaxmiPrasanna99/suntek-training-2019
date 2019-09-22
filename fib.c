#include <stdio.h>
int main()
{
    int i, n, a=0,b=1,t;
    printf("Enter the number ");
    scanf("%d", &n);
    if(n<=0)
    {
        printf("invalid");
    }
    else{
    printf("Fibonacci Series:");
    for (i = 1;i <= n; ++i)
    {
        printf("%d, ", a);
         t=a+b;
        a=b;
        b=t;
    }}
    return 0;
}
