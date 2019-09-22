#include <stdio.h>
#include <stdlib.h>
void rm(int a[], int s);

void rm(int a[], int s) 
{ 
    int i; 
    printf("\n The repeating element is"); 
  
    for (i = 0; i < s; i++) { 
        if (a[abs(a[i]) - 1] > 0) 
            a[abs(a[i]) - 1] = -a[abs(a[i]) - 1]; 
        else
            printf(" %d ", abs(a[i])); 
    } 
  
    printf("\n the missing element is "); 
    for (i = 0; i < s; i++) { 
        if (a[i] > 0) 
            printf("%d", i + 1); 
    } 
} 
  
int main() 
{ 
    int a[50],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    rm(a, n); 
    return 0; 
}
