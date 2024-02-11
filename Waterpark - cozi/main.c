#include "functii.h"


int main(){
    struct NOD * h1=NULL;
    struct NOD * h2=NULL;
    struct NOD * h3=NULL;
    char nm[30];
    int cd;
    
    while(scanf("%s",nm)!=EOF){
        scanf("%d",&cd);
        if(cd==1){
            h1=add_NOD(h1,nm,cd);
        }
        if(cd==2){
            h2=add_NOD(h2,nm,cd);
        }
        if(cd==3){
            h3=add_NOD(h3,nm,cd);
        }
    }
    //showq(h3);
    show_all(h1,h2,h3);
}