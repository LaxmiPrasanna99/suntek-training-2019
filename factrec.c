
#include <stdio.h>
int fact(int n);
int main()
{
int n,i,s=1;
printf("enter n");
scanf("%d",&n);
if(n<0)
{
    printf("invalid");
    
}
else if(n==0)
{
    printf("factorial is 1");
}
else{
    printf("factorisl is %d",fact(n));
}return 0;
}
int fact(int n)
{
    if(n>=1)
    {
        return(n*fact(n-1));
    }
    else 
    return 1;
}
