#include <stdio.h>
#include <stdlib.h>
#include "set.h"


struct set {
    int *value;
    struct set *next;
};


void private_insert(Set *self, int value) {
    if(self->value == NULL) {
        self->value = malloc(sizeof(int));
        *self->value = value;
    }

    else if(self->next != NULL){
        private_insert(self->next, value);
    }

    else if(self->next == NULL) {
        self->next = set_create();
        private_insert(self->next, value);
    }    
}

Set *set_create(void) {
    Set *inner_set = malloc(sizeof(Set));
    inner_set->value = NULL;
    inner_set->next = NULL;
    return inner_set;
}


void set_insert(Set *self, int value) {
    if(!set_contains(self, value)) 
        private_insert(self, value);
}



int set_contains(Set *self, int value) {
    if(self->value != NULL && *self->value == value) return 1;
    else if(self->next != NULL) return set_contains(self->next, value);
    else return 0;
}


int set_size(Set *self) {
    if(self->next != NULL) return 1 + set_size(self->next);
    else if(self->next == NULL && self->value != NULL) return 1;
    else return 0;
}


void set_destroy(Set *self) {
    free(self);
}
