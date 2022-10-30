#include <stdlib.h>
/**
 * remalloc - reallocated memory
 * @pt: pointer to memory to reallocate
 * @opt: size of old memory
 * @npt: new memory size
 *
 * Return: pointer to new memory
 */

void remalloc(void *pt, unsigned int nb1, unsigned int nnb2)
{
	char *npt;
	char *opt = pt;
	unsigned int i;

	if (nb1 == nnb2)
		return (pt);
	if (pt == NULL)
		return (malloc(nnb2));
	else if (nnb2 == 0)
	{
		free(pt);
		return (NULL);
	}
	npt = malloc(nnb2);
	if (npt == NULL)
		return (NULL);
	for (i = 0; i < nnb2 && i < nb1; i++)
	{
		npt[i] = opt[i];
	}
	free(opt);
	return (npt);
}
