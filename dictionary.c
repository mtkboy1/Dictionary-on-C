#include <stdio.h>
#include <stdlib.h>
struct dictionary
{
    int *keys;
    int *vals;
    int *size; //element to add id
};
struct dictionary create(){
    struct dictionary d;
    d.keys = (int*) calloc(1,sizeof(int*));
    d.vals = (int*) calloc(1,sizeof(int*)); 
    d.size = (int*) malloc(sizeof(int));
    *d.size = 1;
    for(int i=0; i<1; i++){
        d.keys[i] = 1;
        d.vals[i] = 1;
    }
    return d;
}
void add(struct dictionary *d, int key, int val){
    int dsize = *d->size+2;
    *d->size = dsize - 1;
    d->keys = (int*) realloc(d->keys,dsize*sizeof(int));
    d->vals = (int*) realloc(d->keys,dsize*sizeof(int));
    d->keys[dsize] = key; 
    d->vals[dsize] = val;
}
int get(struct dictionary *d, int key){
    for (size_t i = 0; i < *d->size; i++)
    {
        if(d->keys[i]==key){
            return d->vals[i];
        }
    }
}
void rm(struct dictionary *d, int key){
    int dsize = *d->size;
    for (size_t i = 0; i < dsize; i++)
    {
        if(d->keys[i]==key){
            for (size_t e = i; e < dsize-1; e++){
                d->keys[e] = d->keys[e+1];
                d->vals[e] = d->vals[e+1];
            }
            d->keys = (int*) realloc(d->keys,(dsize+1)*sizeof(int));
            d->vals = (int*) realloc(d->keys,(dsize+1)*sizeof(int));
        }
    }
}