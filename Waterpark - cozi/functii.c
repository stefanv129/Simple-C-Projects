#include "functii.h"

struct NOD * create_NOD(char nume[30],int coada){
    struct NOD * nod_nou;
    nod_nou=(struct NOD*)malloc(sizeof(struct NOD));
    strcpy(nod_nou->nume,nume);
    nod_nou->coada=coada;
    nod_nou->next=NULL;
    return nod_nou;
}

struct NOD * add_NOD(struct NOD * head,char nume[30],int coada){
    
    if(head==NULL){
        head=create_NOD(nume,coada);
        return head;
    }
    
    
    struct NOD * nod_curent=head;
    struct NOD * nod_nou=NULL;
    
    while(nod_curent->next!=NULL){
        nod_curent=nod_curent->next;
    }
    
    nod_nou=create_NOD(nume,coada);
    nod_curent->next=nod_nou;
    
    return head;
}

 void show_all(struct NOD * head1,struct NOD * head2,struct NOD * head3){
     struct NOD * nod_curent1;
     struct NOD * nod_curent2;
     struct NOD * nod_curent3;
     nod_curent1=head1;
     nod_curent2=head2;
     nod_curent3=head3;
    
     while(nod_curent1!=NULL && nod_curent2!=NULL && nod_curent3!=NULL){
         printf("%s ",nod_curent1->nume);
         printf("%s ",nod_curent2->nume);
         printf("%s\n",nod_curent3->nume);
         nod_curent1=nod_curent1->next;
         nod_curent2=nod_curent2->next;
         nod_curent3=nod_curent3->next;
     }
 }

void showq(struct NOD * head1){
    struct NOD * nod_curent1;
    nod_curent1=head1;
    while(nod_curent1!=NULL){
       printf("%s ",nod_curent1->nume); 
       nod_curent1=nod_curent1->next; 
    }
}
