#include <stdio.h>
#include <string.h>

int main (){

    char adj0[20] = "";
    char name[30] = "";
    char adj1[20] = "";
    char verb[20] = "";
    char adj2[20] = "";

    printf("Enter an adjective (description): ");
    fgets(adj0, sizeof(adj0), stdin);
    adj0[strcspn(adj0, "\n")] = 0;

    printf("Enter a noun (an animal or person): ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    printf("Enter an adjective (description): ");
    fgets(adj1, sizeof(adj1), stdin);
    adj1[strcspn(adj1, "\n")] = 0;

    printf("Enter a verb (ending w/ -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strcspn(verb, "\n")] = 0;

    printf("Enter an adjective (description): ");
    fgets(adj2, sizeof(adj2), stdin);
    adj2[strcspn(adj2, "\n")] = 0;

    printf("\nToday i went to a/an %s zoo.\n", adj0);
    printf("In an exhibit, I saw a/an %s.\n", name);
    printf("%s was %s and %s!\n", name, adj1, verb);
    printf("I was %s!\n", adj2);
    
    return 0;
}