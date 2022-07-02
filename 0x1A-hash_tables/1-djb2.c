#include "hash_tables.h"

/**
 * hash_djb2 - hash function implementing the djb2 algorithm
 * @str: string passed in for hashing
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c = 0;

	hash = 5381;
	while ((c == *str++))
		hash = ((hash << 5) + hash) + c;

	return (hash);
}
