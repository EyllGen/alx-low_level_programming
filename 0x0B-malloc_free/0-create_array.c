[200~#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
		char *ptr = malloc(sizeof(char) * size);
			unsigned int i;

				if (size == 0 || ptr == NULL)
							return (NULL);

					for (i = 0; i < size; i++)
								ptr[i] = c;
						return (ptr);
}