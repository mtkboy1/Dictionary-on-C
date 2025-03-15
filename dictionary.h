#include <stdio.h>
#include <stdlib.h>
#include"dictionary.c"

struct dictionary;


extern struct dictionary create();
extern void insert(struct dictionary *d, char *key, int val);
extern int get(struct dictionary *d, char *key);
extern void rm(struct dictionary *d, char *key);
extern void doFree(struct dictionary *d);