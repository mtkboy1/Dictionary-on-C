#include <stdio.h>
#include <stdlib.h>
#include"dictionary.h"

int main(){
    struct dictionary d = create(5);
    add(&d,5,5);
    free(d.keys);
    free(d.vals);
    return 0;
}