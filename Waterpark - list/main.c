#include "functii.h"

int main() {
    // Initialize three linked lists
    struct NOD *h1 = NULL;
    struct NOD *h2 = NULL;
    struct NOD *h3 = NULL;
    char nm[30];
    int cd;

    // Read input until the end of file
    while (scanf("%s", nm) != EOF) {
        // Read an integer
        scanf("%d", &cd);

        // Based on the integer value, add a new node to the corresponding linked list
        if (cd == 1) {
            h1 = add_NOD(h1, nm, cd);
        } else if (cd == 2) {
            h2 = add_NOD(h2, nm, cd);
        } else if (cd == 3) {
            h3 = add_NOD(h3, nm, cd);
        }
    }

    // Display all elements from the three linked lists side by side
    show_all(h1, h2, h3);

    return 0;
}
