//multipication table
#include <stdio.h>
int main()
{
    int i=1,n;
    printf("\n enter no :");
    scanf("%d", &n);
    for (;i<=10; i++)
    {
       printf("\n %d * %d = %d" ,n,i,n*i);
    }
    return 0;
}