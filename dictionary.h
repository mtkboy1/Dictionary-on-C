#include <stdio.h>
#include <stdlib.h>
#include"dictionary.c"

struct dictionary;


extern struct dictionary create();
extern void add(struct dictionary *d, int key, int val);