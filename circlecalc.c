#include <stdio.h>
#include <math.h>

int main(){
    const long double PI = 3.14159265359;
    double SurfaceArea = 0;
    double radius = 0;
    double area = 0;

    printf("please type the radius of your circle: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    SurfaceArea = 4 * PI * pow(radius, 2);

    printf("\nThe area of your circle is: %.2lf", area);
    printf("\nand your SurfaceArea is: %.2lf", SurfaceArea);

    return 0;
}