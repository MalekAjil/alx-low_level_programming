#ifndef dog1
#define dog1
#ifndef name1
#define name1
#ifndef age1
#define age1
#ifndef owner1
#define owner1
/**
 * struct dog - structure of dog type
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
#endif
#endif
#endif

#ifndef initdog
#define initdog
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
#ifndef printdog
#define printdog
void print_dog(struct dog *d);
#endif

#ifndef newdog
#define newdog
dog_t *new_dog(char *name, float age, char *owner);
#endif

#ifndef freedog
#define freedog
void free_dog(dog_t *d);
#endif
