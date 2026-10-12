#include <stdio.h>
#include <math.h>

int main() {

    // COMPOUND INTEREST CALCULATOR

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;

    printf("Compund Interest Calculator\n");

    printf("\nEnter the principal (P): ");
    scanf("%lf", &principal);

    printf("Enter the interest rate %% (r): ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the number of years (t): ");
    scanf("%d", &years);

    printf("Enter number of times compounded per year: ");
    scanf("%d", &timesCompounded);

    total = principal * pow( 1 + rate / timesCompounded , timesCompounded * years);

    printf("Then at the end total would be: $%.2lf", total);

    return 0;
}