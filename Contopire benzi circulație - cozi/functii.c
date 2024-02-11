#include "functii.h"

struct NOD * creere_nod(char nr[8]){
    struct NOD * nod_nou=(struct NOD*)malloc(sizeof(struct NOD));
    
    strcpy(nod_nou->nr,nr);
    nod_nou->next=NULL;
    return nod_nou;
    
}

struct NOD * add_nod(struct NOD * head,char nr[8]){
    struct NOD *nod_curent=NULL;
    struct NOD *nod_nou;
    
    if(head==NULL){
        head=creere_nod(nr);
        return head;
    }
    nod_curent=head;
    
    while(nod_curent->next!=NULL){
        nod_curent=nod_curent->next;
    }
    nod_nou=creere_nod(nr);
    nod_curent->next=nod_nou;
    return head;
}

struct NOD * del_nod(struct NOD * head){
    if(head==NULL){
        return NULL;
    }
    
    struct NOD *nod_curent=NULL;
    nod_curent=head;
    head=head->next;
    free(nod_curent);
    return head;
}

void show(struct NOD * head){
    struct NOD *nod_curent=NULL;
    nod_curent=head;
    
    while(nod_curent!=NULL){
        printf("%s\n",nod_curent->nr);
        nod_curent=nod_curent->next;
    }
    
}

struct NOD * funnel(struct NOD * head1,struct NOD * head2,struct NOD * head3){
    char temp[8];
    
    while(head1!=NULL || head2!=NULL){
        if(head2!=NULL){
        strcpy(temp,head2->nr);
        head2=del_nod(head2);
        head3=add_nod(head3,temp);
        }
        
        if(head1!=NULL){
        strcpy(temp,head1->nr);
        head1=del_nod(head1);
        head3=add_nod(head3,temp);
        }
    }
    
    return head3;
}

char * peek(struct NOD * head){
    
    return head->nr;
}

