#include<stdio.h>
int main()
{
    int a[20],n,i;
    printf("Array size:");
    scanf("%d",&n);
    printf("Array elements:")
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}