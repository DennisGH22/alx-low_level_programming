/**
 * struct dog - Data structure.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: A dog with a name, age, and owner.
*/

typedef struct dog
{
	char *name, *owner;
	float age;
} dog_t;

/* Functions Prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);