#include <stdio.h>
#include <stdlib.h>
struct dictionary
{
    int *keys;
    int *vals;
    int size;; //element to add id
};
/*struct dictionary create(size_t size){
    struct dictionary d;
    d.thisVal = 0;
    d.keys = (int*) calloc(size,sizeof(int*));
    d.vals = (int*) calloc(size,sizeof(int*)); 
    for(int i=0; i<size; i++){
        d.keys[i] = 0;
        d.vals[i] = 0;
    }
    return d;
}*/
struct dictionary create(){
    struct dictionary d;
    d.size = 0;
    d.keys = (int*) calloc(1,sizeof(int*));
    d.vals = (int*) calloc(1,sizeof(int*)); 
    for(int i=0; i<1; i++){
        d.keys[i] = 1;
        d.vals[i] = 1;
    }
    return d;
}
void add(struct dictionary *d, int key, int val){
    d->size++;
    d->keys = (int*) realloc(d->keys,(d->size+1)*sizeof(int));
    d->vals = (int*) realloc(d->keys,(d->size+1)*sizeof(int));
    d->keys[d->size] = key; 
    d->vals[d->size] = val;
}
int get(struct dictionary *d, int key){
    for (size_t i = 0; i < d->size; i++)
    {
        if(d->keys[i]==key){
            return d->vals[i];
        }
    }
    
}