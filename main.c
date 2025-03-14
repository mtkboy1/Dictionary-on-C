#include <stdio.h>
#include <stdlib.h>
#include"dictionary.h"

int main(){
    struct dictionary d = create();
    add(&d,5,5);
    add(&d,6,5);
    rm(&d,5);
    doFree(&d);
    //free(d.keys);
    //free(d.vals);
   // free(d.size);
    return 0;
}