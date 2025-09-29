#include <stdio.h>

int main(){
    double num1 = 0.0;
    double num2 = 0.0;
    char sign = '\0';
    double result = 0.0;

    printf("Please enter your first number: ");
    scanf("%lf", &num1);

    printf("Please enter your operator '+ - / *': ");
    scanf(" %c", &sign);

    printf("Please enter your second number: ");
    scanf("%lf", &num2);

    switch(sign){
        case '+':
        result = num1 + num2;
        break;

        case '-':
        result = num1 - num2;
        break;

        case '*':
        result = num1 * num2;
        break;

        case '/':
        result = num1 / num2;
        break;

        default:
        printf("Please enter a valid operator! ");
    }

    printf("\nResult: %lf", result);

    return 0;

}