#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct for a dog.
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: Contains the metadata of a dog with the type of dog's struct
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
};
/* more function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
