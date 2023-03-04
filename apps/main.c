#include <stdio.h>
#include "set.h"


int main(void) {
    Set *my_set = set_create();
    set_insert(my_set, 42);

    if (set_contains(my_set, 42)) {
        printf("42 is in the Set\n");
    } else {
        printf("42 is not in the Set\n");
    }

    int size = set_size(my_set);
    printf("The Set has %d elements\n", size);

    set_destroy(my_set);
    
    return 0;
}