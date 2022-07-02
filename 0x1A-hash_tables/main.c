#include "hash_tables.h"

/**
 * main check the code
 *
 * Return: Always EXIT_SUCCES
 */
int main(void)
{
	hash_table_t *ht;
	char *key;
	char *value;

	ht = hash_table_create(1024);
	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_set(ht, "Bob", "and Kris love asm");
	key = strdup("Tim");
	value = strdup("Britton");
	hash_table_set(ht, key, value);
	key[0] = '\0';
	value[0] = '\0';
	free(key);
	free(value);
	hash_table_set(ht, "98", "Battery Street");
	hash_table_print(ht);
	hash_table_delete(ht);
	return (EXIT_SUCCESS);
}
