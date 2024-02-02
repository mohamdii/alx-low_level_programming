
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = djb2_hash(*key);

	unsigned long int index = hash_value % size;

	return index;
}
