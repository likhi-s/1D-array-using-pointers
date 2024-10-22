#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter n value\n");
    scanf("%d",&n);
    int *p = (int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        p[i]=i;
        printf("%d",p[i]);
    }
    free (p);
    printf("\n");
    return 0;
}
