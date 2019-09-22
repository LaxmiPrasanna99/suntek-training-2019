#include <stdio.h>

int main(void) {
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
    for(i=n;i>=1;i--)
    {
        s=s*i;
        
    }

printf("%d",s);
}
	return 0;
}


