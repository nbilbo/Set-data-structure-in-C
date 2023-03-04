# Set data structure in C

This project implements a Set data structure in C. A Set is a collection of unique integer elements.

## Building

To build this project, you can use the provided Makefile. Simply navigate to the project directory in your terminal and run the following command:

```
make
```

This will compile the source code and create an executable file.


## Sample
To use the Set data structure in your code, include the set.h file in your C source code:

```
#include "set.h"
```

To create a new Set, call the set_create function:

```
Set *my_set = set_create();
```

To insert a new element into the Set, call the set_insert function:

```
set_insert(my_set, 42);
```

To check if an element is in the Set, call the set_contains function:

```
if (set_contains(my_set, 42)) {
    printf("42 is in the Set\n");
} else {
    printf("42 is not in the Set\n");
}
```

To get the number of elements in the Set, call the set_size function:

```
int size = set_size(my_set);
printf("The Set has %d elements\n", size);
```

To free the memory used by the Set, call the set_destroy function:

```
set_destroy(my_set);
```


## Functions

`Set *set_create()`

Creates a new Set and returns a pointer to it.


`void set_insert(Set *self, int value)`

Inserts a new element with the given value into the Set.

`void set_remove(Set *self, int value)`

Removes the element with the given value from the Set.

`int set_contains(Set *self, int value)`

Checks if the Set contains an element with the given value. Returns 1 if the Set contains the element, 0 otherwise.

`int set_size(Set *self)`

Returns the number of elements in the Set.

`void set_destroy(Set *self)`

Frees the memory used by the Set.

## License

This project is licensed under the MIT License. See the LICENSE file for details.