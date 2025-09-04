#include <stdio.h>
int main()
{
    int n=5;

    for (int i=5; i>=1; i--)
    {
       for (int j=1; j<=i; j++)
       {
        printf("%d",j);
       }for (int k=i; k<n; k++)
        {
           printf(" ");
        }
       for (int l=5; l>=1; l--)
       {
        printf("%d",l);
       }
       printf("\n");
       
    }
    

    return 0;
}