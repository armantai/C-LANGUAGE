#include <stdio.h>

int main()
{

    char result;
    int range;
    printf("Enter Your Score :");
    scanf("%d", &range);

    (range >= 90) ? printf("Your result is A \n") : (range >= 80) ? printf("Your result is B \n")
                                                : (range >= 60)   ? printf("Your result is C \n")
                                                : (range >= 40)   ? printf("Your result is D \n")
                                                : (range >= 33)   ? printf("Your result is E \n")
                                                                  : printf("Your result is f \n");

    if (range >= 90)
        result = 'A';

    else if (range >= 80)
        result = 'B';

    else if (range >= 60)
        result = 'C';

    else if (range >= 40)
        result = 'D';

    else if (range >= 33)
        result = 'E';

    else
        result = 'F';

    switch (result)
    {
    case 'A':
        printf("Excellent work.\n");
        printf("Congratulation! You are eligible for next level");
        break;

    case 'B':
        printf("Well done.\n");
        printf("Congratulation! You are eligible for next level");
        break;

    case 'C':
        printf("Good job.\n");
        printf("Congratulation! You are eligible for next level");
        break;

    case 'D':
        printf("You passed, but you could do better.\n");
        printf("Congratulation! You are eligible for next level");
        break;

    case 'E':
        printf("Passed with added mark.\n");
        printf("Congratulation! You are eligible for next level");
        break;

    case 'F':
        printf("Sorry, you failed.\n");
        printf("Please try again next time.");
        break;
    }

    return 0;
}