#ifndef DOG_H
#define DOG_H

/**
 * struct dog - abasic structure to define
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strcpy(char *dest, char *src);

typedef struct dog dog_t;

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
