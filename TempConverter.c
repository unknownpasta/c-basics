#include <stdio.h>
int main(){
    char option = '\0';
    float NumCelcius = 0.0f;
    float NumFahr = 0.0f;
    float CelToFahr = 0.0f;
    float FahrToCel = 0.0f;

    printf("Welcome to Temperature Converter! ");
    printf("\nA. Convert Celcius to Fahrenheit. ");
    printf("\nB. Convert Fahrenheit to Celcius. ");
    printf("\n\nPlease select an option! (A or B): ");
    scanf("%c", &option);

    if ( option == 'A'){
        printf("\nPlease type your value in Celcius: ");
        scanf("%f", &NumCelcius);
        CelToFahr = NumCelcius * 9/5 + 32;
        printf("\n%.2f degree Celcius is %.2f in Fahrenheit.", NumCelcius, CelToFahr);
    }
    else if ( option == 'B'){
        printf("\nPlease type your option in Fahrenheit: ");
        scanf("%f", &NumFahr);
        FahrToCel = (NumFahr - 32) * 5/9;
        printf("\n%.2f Fahrenheit in Celcius is %.2f degrees.", NumFahr, FahrToCel);
    }
    else{
        printf("\nPlease select a valid option! Re-Run code!! ");
    }
    
    return 0;
    
}