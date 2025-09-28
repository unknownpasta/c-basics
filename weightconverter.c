#include <stdio.h>

int main(){
    int choice = 0;
    float kg = 0.0f;
    float pounds = 0.0f;
    float KgToPounds = 0.0f;
    float PoundsToKg = 0.0f;

    printf("Welcome to weight converter! what do you want to do?");
    printf("\n1. Convert Kilograms into Pounds. ");
    printf("\n2. Convert Pounds to Kilograms. ");
    printf("\n\nPlease select either 1 or 2: ");
    scanf("%d", &choice);
    if ( choice == 1){
        printf("Type your value in Kilograms (k/g): ");\
        scanf("%f", &kg);
        KgToPounds = kg * 2.20462;
        printf("\nYour weight in Pounds is: %.2f", KgToPounds);
    }
    else if ( choice == 2){
        printf("Type your value in Pounds: ");
        scanf("%f", &pounds);
        PoundsToKg = pounds * 0.453592;
        printf("\nYour weight in KiloGrams is: %.2f", PoundsToKg);
    }
    else{
        printf("\nPlease select a valid option. Re-Run the code! ");
    }
    return 0;
}