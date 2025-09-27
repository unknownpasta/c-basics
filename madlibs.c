#include <stdio.h>
#include <string.h>

int main(){
    char noun[50] = "";
    char verb[50] = "";
    char item[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    printf("Enter a name: ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Enter a verb ending w /ing: ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Enter an item(any object): ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("Enter an Adjective(description): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0';

    printf("Enter an Adjective(description): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = '\0';

    printf("Enter an Adjective(description): ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1] = '\0';

    printf("\n\n%s was playing Minecraft when a %s fell on his head, his %s friend who was %s and %s was %s when he saw this happen. ", noun, item, adjective1, adjective2, adjective3, verb);

    return 0;
}