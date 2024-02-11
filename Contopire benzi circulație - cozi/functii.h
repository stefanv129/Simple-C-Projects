#ifndef FUNCTII_H
#define FUNCTII_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct NOD{
    char nr[8];
    struct NOD *next;
};


struct NOD * creere_nod(char nr[8]);
struct NOD * add_nod(struct NOD * head,char nr[8]);
void show(struct NOD * head);
struct NOD * funnel(struct NOD * head1,struct NOD * head2,struct NOD * head3);
char * peek(struct NOD * head);
struct NOD * del_nod(struct NOD * head);











#endif