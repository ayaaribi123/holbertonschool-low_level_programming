#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - struct
 *@name: name of dog
 *@age: age of dog
 *@owner: the owner
 */

struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 *dog_t - struct
 *@name: name of dog
 *@age: age of dog
 *@owner: the owner
 */
typedef struct dog_t
{
char *name;
float age;
char *owner;
} dog_t;

#endif
