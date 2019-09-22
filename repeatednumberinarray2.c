#include <stdio.h>

int main()
{
	int a[5];
	int i,j,n=5;
	int id=-1,e;
	for(i=0; i<n; i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]==a[j])
			{
				e=a[j];
				id=j;
				break;
			}				
		}
		
		if(id!= -1)
			break;
	}
	if(id!=-1)
		printf("%d repeated at %d index\n",ele,ind);
	else
		printf("There is no repeated element\n");
	return 0;
}
