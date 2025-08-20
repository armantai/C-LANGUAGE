#include <stdio.h>

int main()
{
    int HRA;
    printf("enter your HRA value");
    scanf("%d",&HRA);

    int DA;
    printf("enter your DA value");
    scanf("%d",&DA);

    int TA;
    printf("enter your TA value");
    scanf("%d",&TA);

    int result=100+HRA+DA+TA;
    printf("yourn total gross salary %d",result);


    return 0;
}