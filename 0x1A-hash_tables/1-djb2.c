/**
* hash_djb2 - implements djb2 algorithm
* @str: string the hash value will be assigned to
*
* Return: hash value
*/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
