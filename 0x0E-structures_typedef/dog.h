#ifndef DOG_H
#define DOG_H

/**
  * struct dog - New type describing dong
  * @name: Name of dog
  * @age: Age of dog
  * @owner: Owner of dog
  *
  *
  */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */

