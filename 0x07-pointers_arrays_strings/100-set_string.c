#include <stdio.h>
#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: a double pointer
 * @to: a single pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
