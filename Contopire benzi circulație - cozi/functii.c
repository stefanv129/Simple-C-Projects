#include "functii.h"

// Function to create a new node with a given number
struct NOD * creere_nod(char nr[8]) {
    struct NOD * nod_nou = (struct NOD*)malloc(sizeof(struct NOD));
    
    strcpy(nod_nou->nr, nr);
    nod_nou->next = NULL;
    return nod_nou;
}

// Function to add a new node to the end of the list
struct NOD * add_nod(struct NOD * head, char nr[8]) {
    struct NOD * nod_curent = NULL;
    struct NOD * nod_nou;

    // If the list is empty, create a new node and set it as the head
    if (head == NULL) {
        head = creere_nod(nr);
        return head;
    }

    // Traverse the list to find the last node
    nod_curent = head;

    while (nod_curent->next != NULL) {
        nod_curent = nod_curent->next;
    }

    // Create a new node and add it to the end of the list
    nod_nou = creere_nod(nr);
    nod_curent->next = nod_nou;
    return head;
}

// Function to delete the first node from the list
struct NOD * del_nod(struct NOD * head) {
    if (head == NULL) {
        return NULL;
    }

    struct NOD * nod_curent = NULL;
    nod_curent = head;
    head = head->next;
    
    // Free the memory of the deleted node
    free(nod_curent);
    return head;
}

// Function to display all elements in the list
void show(struct NOD * head) {
    struct NOD * nod_curent = NULL;
    nod_curent = head;

    while (nod_curent != NULL) {
        printf("%s\n", nod_curent->nr);
        nod_curent = nod_curent->next;
    }
}

// Function to funnel elements from two linked lists into a third one
struct NOD * funnel(struct NOD * head1, struct NOD * head2, struct NOD * head3) {
    char temp[8];

    // Continue until at least one of the input lists is not empty
    while (head1 != NULL || head2 != NULL) {
        if (head2 != NULL) {
            // Move an element from head2 to head3
            strcpy(temp, head2->nr);
            head2 = del_nod(head2);
            head3 = add_nod(head3, temp);
        }
        
        if (head1 != NULL) {
            // Move an element from head1 to head3
            strcpy(temp, head1->nr);
            head1 = del_nod(head1);
            head3 = add_nod(head3, temp);
        }
    }
    
    return head3;
}

// Function to peek at the first element in the list without removing it
char * peek(struct NOD * head) {
    return head->nr;
}
