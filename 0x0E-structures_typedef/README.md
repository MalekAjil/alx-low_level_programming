At this project we will know:

    What are structures, when, why and how to use them
    How to use typedef
and it contains following files:
dog.h: Define a new type struct dog with the following elements:

    name, type = char *
    age, type = float
    owner, type = char *
1-init_dog.c:  initialize a variable of type struct dog.
dog.h: Define a new type dog_t as a new name for the type struct dog.
4-new_dog.c: creates a new dog.

    Prototype: dog_t *new_dog(char *name, float age, char *owner);
    You have to store a copy of name and owner
    Return NULL if the function fails
5-free_dog.c: frees dogs.
