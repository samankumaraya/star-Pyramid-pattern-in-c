#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,j,i;
  printf("Enter how many colums do you want  :");
  scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
       for(j=n-i;j>0;j--)
        {
        printf("   ");
       }
       for(j=0;j<2*i-1;j++)
        {
        printf(" * ");
       }
       printf("\n");
    }
    return 0;
}
