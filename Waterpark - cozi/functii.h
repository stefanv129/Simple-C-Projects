#ifndef FUNCTII_H
#define FUNCTII_H


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct NOD{
    
    
    char nume[30];
    int coada;
    struct NOD *next;
};
void showq(struct NOD * head1);
struct NOD * create_NOD(char nume[30],int coada);
struct NOD * add_NOD(struct NOD * head,char nume[30],int coada);
void show_all(struct NOD * head1,struct NOD * head2,struct NOD * head3);
#endif