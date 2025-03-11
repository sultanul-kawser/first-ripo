#include <stdio.h>
#include <string.h>

int main() {
    char kingdom[99], class[99], order[99];

    // Read input
    scanf("%s %s %s", kingdom, class, order);

    // Compare kingdom
    if (strcmp(kingdom, "vertebrado") == 0) {
        // Compare class
        if (strcmp(class, "ave") == 0) {
            // Compare order
            if (strcmp(order, "carnivoro") == 0) {
                printf("aguia\n");
            }
        }
    }

    return 0;
}