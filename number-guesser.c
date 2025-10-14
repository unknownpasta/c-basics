#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    int guess = 0;
    int min = 1;
    int max = 100;
    int tries = 0;
    srand(time(NULL));
    int answer = (rand() % (max - min + 1)) + min;
    
    srand(time(NULL));
    
    printf("***NUMBER GUESSING GAME***");

    do{
        printf("\n\nGuess a number between %d and %d: ", min, max);
        scanf(" %d", &guess);
        tries++;
        if (guess < answer)
    {
        printf("TOO LOW!");
    }
    else if(guess > answer){
        printf("TOO HIGH!");
    }
    else{
        printf("\nCORRECT!");
    }
    }while(answer != guess);
    
    printf("\nThe answer is %d", answer);
    printf("\nYou took -- %d -- tries", tries);
    
    return 0;
}