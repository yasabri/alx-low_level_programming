#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: name member
 * @age: age of member
 * @owner: owner member
 *
 * Description: Longer description
 */

#include <stdio.h>
struct dog{
    char * = name
    float = age
    char * = owner
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
