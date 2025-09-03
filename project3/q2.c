#include<stdio.h>
int main(){



    int number, number2 = 0;


    
    printf("Enter your number: ");
    scanf("%d", &number);




    if(number == 0){
        number2 = 1;
    }else{
        while(number != 0){
            number = number / 10;
            number2++;
        }
    }




    printf("Total number of digits: %d\n", number2);

    return 0;
}