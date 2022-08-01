#ifndef DOG_H
#define DOG_H

/**
  * File: dog.h
  * Description: Define a new type struct dog with the following elements:
  * name, type = char *
  * age, type = float
  * owner, type = char *
  *
  */

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
	/**
	  * dog_t - Typedef for struct dog
	  *
	  */
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */

