#include "functii.h"

// Structure definition for a node
struct NOD * create_NOD(char nume[30], int coada){
    // Allocate memory for a new node
    struct NOD * nod_nou;
    nod_nou = (struct NOD*)malloc(sizeof(struct NOD));

    // Initialize the node with the provided data
    strcpy(nod_nou->nume, nume);
    nod_nou->coada = coada;
    nod_nou->next = NULL;

    return nod_nou;
}

// Function to add a new node to the end of the list
struct NOD * add_NOD(struct NOD * head, char nume[30], int coada){
    // If the list is empty, create a new node and set it as the head
    if(head == NULL){
        head = create_NOD(nume, coada);
        return head;
    }

    // Traverse the list to find the last node
    struct NOD * nod_curent = head;
    struct NOD * nod_nou = NULL;

    while(nod_curent->next != NULL){
        nod_curent = nod_curent->next;
    }

    // Create a new node and add it to the end of the list
    nod_nou = create_NOD(nume, coada);
    nod_curent->next = nod_nou;

    return head;
}

// Function to display elements from three linked lists side by side
void show_all(struct NOD * head1, struct NOD * head2, struct NOD * head3){
    struct NOD * nod_curent1;
    struct NOD * nod_curent2;
    struct NOD * nod_curent3;
    nod_curent1 = head1;
    nod_curent2 = head2;
    nod_curent3 = head3;

    // Traverse all three lists simultaneously and print elements
    while(nod_curent1 != NULL && nod_curent2 != NULL && nod_curent3 != NULL){
        printf("%s ", nod_curent1->nume);
        printf("%s ", nod_curent2->nume);
        printf("%s\n", nod_curent3->nume);
        nod_curent1 = nod_curent1->next;
        nod_curent2 = nod_curent2->next;
        nod_curent3 = nod_curent3->next;
    }
}

// Function to display elements from a single linked list
void showq(struct NOD * head1){
    struct NOD * nod_curent1;
    nod_curent1 = head1;

    // Traverse the list and print elements
    while(nod_curent1 != NULL){
        printf("%s ", nod_curent1->nume);
        nod_curent1 = nod_curent1->next;
    }
}
