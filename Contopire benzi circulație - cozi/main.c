#include "functii.h"


int main(){
    int m,n;
    char temp[8];
    struct NOD * band1=NULL;
    struct NOD * band2=NULL;
    struct NOD * band3=NULL;
    
    scanf("%d",&m);
    scanf("%d",&n);
    
    for(int i=0;i<m;i++){
        scanf("%s", temp);
        band1=add_nod(band1,temp);
    }
    
    for(int j=0;j<n;j++){
        scanf("%s", temp);
        band2=add_nod(band2,temp);
    }
    //band1=del_nod(band1);
    //show(band1);
    //show(band2);
    band3=funnel(band1,band2,band3);
    show(band3);
    
}