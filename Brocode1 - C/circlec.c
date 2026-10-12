#include <stdio.h>
#include <math.h>

int main() {

    double rad = 0.0;
    double cir = 0.0;
    double area = 0.0;
    double volume = 0.0;
    double sarea = 0.0;
    const double pi = M_PI;

    printf("Enter the radius: ");
    scanf("%lf", &rad);

    cir = 2 * pi * rad;
    area = pi * pow(rad, 2);
    volume = 4.0 / 3.0 * pi * pow(rad, 3);
    sarea = 4 * pi * pow(rad, 2);

    printf("\nCircumference: %.2lf\n", cir);
    printf("Area: %.2lf\n", area);
    printf("Volume: %.2lf\n", volume);
    printf("Surface area: %.2lf", sarea);

    
    return 0;
}