#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,n,i,y,p,power=1;
    printf("Enter x,n,p((x^n)mod p):");
    scanf("%d%d%d",&x,&n,&p);
    if(x==0)
    {
        printf("power=0");
        exit(0);
    }
    if(x==1)
    {
        printf("power=1");
        exit(0); 
    }
    if(n==1)
    power=x;
    else if(n==0)
    power=1;
    else if(n>0)
    {
    do
    {
        power=power*x;
        n--;
    }while(n!=0);
    printf("\n mod=%d",power%p);
    
    }
   
    
}
