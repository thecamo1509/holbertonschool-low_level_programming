#ifndef DOG_H
#define DOG_H

/**
 * struct dog - details of a dog
 * @name: Dog's name
 * @owner: Owner's name
 * @age: Dog's age
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog;
#endif
