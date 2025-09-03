#include<stdio.h>
int main(){
    int number, number2, number3, value;

    printf("enter any number: ");
    scanf("%d", &number);

    number3 = number % 10;

    number2 = number;
    while(number2 >= 10){
        number2 = number2 / 10;
    }

    value = number2 + number3;

    printf("The sum of first and last digit: %d\n", value);

    return 0;
}