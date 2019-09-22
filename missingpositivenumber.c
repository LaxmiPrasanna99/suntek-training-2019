#include <stdio.h>
void main()
{
  int n,i,j,a[20],temp;
  printf("Enter no of elements to enter:");
  scanf("%d",&n);
  printf("Enter numbers:");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  a[i]='\0';
 for(i=1,j=0;a[j]!='\0';j++)
           {
               if(a[j]==i)
               {
                   i++;
                   j=-1;
               }
           }
                if(a[j]=='\0')
               {
                   printf("\nmissing:%d",i);
                   
               }

}
