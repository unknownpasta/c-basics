#include <stdio.h>
#include <string.h>

int main(){

    char item[50] = "";
    int num = 0;
    float price = 0.0f;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy?");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price of it?");
    scanf("%f", &price);

    printf("How many would you like to buy?");
    scanf("%d", &num);

    total = price * num;

    printf("You have bought %d %ss \n", num, item);
    printf("Your total is %c%.2f", currency, total);

    return 0;

}