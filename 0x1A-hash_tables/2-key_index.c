/**
 * key_index - function that finds the key
 *
 * @key: the key
 * @size: size of array
 * return: int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = djb2_hash((unsigned char *)key);

	unsigned long int index = hash_value % size;

	return index;
}
