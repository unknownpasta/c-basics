#include <stdio.h>

void checkbalance(float balance);
float depositcash();
float withdrawcash(float balance);

int main(){
    int choice = 0;
    float balance = 0.0f;

    do{
    printf("\n*** BANK OF CIA ***");
    printf("\n1. Check Balance ");
    printf("\n2. Deposit Cash ");
    printf("\n3. Withdraw Cash ");
    printf("\n4. EXIT");
    printf("\nPlease select an option (1 - 4): ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
        checkbalance(balance);
        break;
        
        case 2:
        balance += depositcash();
        break;

        case 3:
        balance -= withdrawcash(balance);
        break;

        case 4:
        printf("\nThank you for using this bank! ");
        break;

        default:
        printf("\nInvalid Option!");
    }
    }while(choice != 4);
    return 0;
}


void checkbalance(float balance){
    printf("\nYour balance is $%.2f", balance);
}
float depositcash(){
    float deposit = 0.0f;
    printf("\nPlease enter the amount you want to deposit: $");
    scanf("%f", &deposit);

        if(deposit < 0){
            printf("INVALID AMOUNT!");
            return 0.0f;
        }
        else{
            printf("\nAmount deposited!");
            return deposit;
        }
}
float withdrawcash(float balance){
    float withdraw = 0.0f;
    printf("\nPlease enter the amount you want to withdraw: $");
    scanf("%f", &withdraw);
    if(withdraw > balance){
        printf("Insufficient funds!");
        return 0.0f;
    }
    else if(withdraw < 0){
        printf("Please type in a valid amount! ");
        return 0.0f;
    }
    else{
    printf("\nAmount withdrawn!");
    return withdraw;
    }
}
