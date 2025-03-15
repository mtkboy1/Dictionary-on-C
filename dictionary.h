#include <stdio.h>
#include <stdlib.h>
#include"dictionary.c"

struct dictionary;


extern struct dictionary create();
extern void insert(struct dictionary *d, int key, int val);
extern int get(struct dictionary *d, int key);
extern void rm(struct dictionary *d, int key);
extern void doFree(struct dictionary *d);