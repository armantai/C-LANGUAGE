#include <stdio.h>

int main(){

    int n=5;

    for(int i=n; i>=1; i--){

        for (int j=i; j<=n; j++)
        {
            printf("%d",i);
        }
        printf("\n");
        
    }



    return 0;
}