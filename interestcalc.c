#include <stdio.h>
#include <math.h>

int main(){
    //compound interest calculator
    double Principal = 0.0;
    double Rate = 0.0;
    int Years = 0;
    int TimesCompounded;
    double total = 0.0;

    printf("Compound Interest Calculator\n");

    printf("Enter the Principal(P): ");
    scanf("%lf", &Principal);

    printf("Enter the Interest Rate: ");
    scanf("%lf", &Rate);

    Rate = Rate / 100;

    printf("Enter the # of years (t): ");
    scanf("%d", &Years);

    printf("Enter the # of times compounded per year (n): ");
    scanf("%d", &TimesCompounded);

    total = Principal * pow(1 + Rate / TimesCompounded, TimesCompounded * Years);

    printf("After %d Years, the total will be $ %.2lf", Years, total);

    return 0;

}


