#include <stdio.h>
#include <ctype.h>

int main(){
    char questions[][100] = {"Which is the largest passenger plane?\n"
                           , "Which passenger plane is mostly electric and made of carbon fibre composites?\n"
                           , "Why are flaps used on an aircraft?\n"
                           , "What is the name of the instrument that shows an aircrafts altitude?\n" };
    char options[][100] = {"A. a320\nB. 787\nC. a380\nD. 737\n"
                         , "A. 777\nB. 747\nC. c-5 galaxy\nD. 787\n"
                         , "A. To control the pitch\nB. To generate Lift\nC. To control the yaw\nD. To control speed\n"
                         , "A. Gyroscope\nB. Stethoscope\nC. Attitude indicator\nD. Altimeter\n"};
    char AnswerKey[] = {'C', 'D', 'B', 'D'};

    printf("*** AVIATION QUIZ PROGRAM ***\n");

    int size = sizeof(questions) / sizeof(questions[0]);

    char guesses = '\0';
    int score = 0;
    
    for(int i = 0; i < size; i++){
        
        printf("\n%s\n", questions[i]);
        printf("%s\n", options[i]);
        printf("Enter your choice: ");
        scanf(" %c", &guesses);
        guesses = toupper(guesses);

        if(guesses == AnswerKey[i]){
            printf("You are correct!\n");
            score++;
        }
        else{
            printf("You are wrong!\n");
        }
    }
    printf("You answered %d out of %d correctly!", score, size);

    return 0;
}