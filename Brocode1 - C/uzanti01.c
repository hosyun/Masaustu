#include <stdio.h>

int main() {
    // variable = A reusable container for a value.
    // Behaves as if it were the value it contains.

    /* int age = 25;
    int year = 2026;
    int quantity = 2;

    printf("You are %d years old!\n" , age);
    printf("The year is %d!\n", year);
    printf("You have ordered %d x items\n", quantity); */

    /* float gpa = 2.5;
    float price = 19.99;
    float temperature = -10.1;

    printf("Your GPA is %.1f\n", gpa);
    printf("The price is %.2fTL\n", price);
    printf("The temperature is %.1f°C\n", temperature); */

    /* double pi = 3.14159265358979;
    double e = 2.7182818284590;

    printf("The value of pi is %.15lf\n", pi);
    printf("The value of e is %.15lf", e); */

    /* char grade = 'A';
    char symbol = '!';
    char currency = '$';

    printf("Your grade is %c.\n", grade);
    printf("Your favourite symbol is %c.\n", symbol);
    printf("The currency is %c.", currency); */

    /* char name[] = "Hosyun";
    char food[] = "Pizza";
    char email[] = "fake123@gmail.com";

    printf("Hello %s\n", name);
    printf("Your favourite food is %s\n", food);
    printf("Your email is %s\n", email); */

#include <stdbool.h>

    bool isOnline = 1;
    bool isStudent = 0;
    bool forSale = 0;

    if(isOnline){
        printf("You are online!\n");
    }
    else{
        printf("You are offline!\n");
    }

    if(isStudent){
        printf("You are a student!\n");
    }
    else{
        printf("You are NOT a student!\n");
    }
    
    if(forSale){
        printf("That item is for sale!");
    }
    else{
        printf("That item is NOT for sale!");
    }

    return 0;
}