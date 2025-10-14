#include <Stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int UserChoice, int ComputerChoice);

int main(){
    srand(time(NULL));
    int userChoice = getUserChoice();
    int ComputerChoice = getComputerChoice();

    switch(userChoice){
        case 1:
        printf("\nYou have chosen ROCK!");
        break;

        case 2:
        printf("\nYou have chosen PAPER!");
        break;

        case 3:
        printf("\nYou have chosen SCISSORS!");
        break;
    }
    switch(ComputerChoice){
        case 1:
        printf("\nComputer has chosen ROCK!");
        break;

        case 2:
        printf("\nComputer has chosen PAPER!");
        break;

        case 3:
        printf("\nComputer has chosen SCISSORS!");
        break;
    }
    checkWinner(userChoice, ComputerChoice);
    return 0;
}
int getComputerChoice(){

    return (rand() % 3) + 1;
};
int getUserChoice(){
    int choice = 0;
    do{
    printf("ROCK PAPER SCISSOR PROGRAM---");
    printf("\n1. ROCK");
    printf("\n2. PAPER");
    printf("\n3. SCISSOR");
    printf("\nPick a number between from 1 - 3: ");
    
    scanf("%d", &choice);
    }while(choice < 1 || choice > 3);
}
void checkWinner(int userChoice, int ComputerChoice){
    if(userChoice == ComputerChoice){
        printf("\nITS A TIE!");
    }
    else if( userChoice == 1 && ComputerChoice == 3 || userChoice == 2 && ComputerChoice == 1 || userChoice == 3 && ComputerChoice == 2){
        printf("\nYOU WIN!");
    }
    else{
        printf("\nYOU LOSE!");
    }
};