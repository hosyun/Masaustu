#include <stdio.h>
#include <string.h>

int main() {

    char item[30] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy? Please type: ");
    fgets(item, sizeof(item), stdin);
    item[strcspn(item, "\n")] = 0;

    printf("What is the price of each? Please enter: ");
    scanf("%f", &price);

    printf("How many would you like? Please enter: ");
    scanf("%d", &quantity);

    printf("\nYou have bought %d %s/s.\n", quantity, item);

    total = price * quantity;

    printf("The total is: %c%.2f", currency, total);

    return 0;
}