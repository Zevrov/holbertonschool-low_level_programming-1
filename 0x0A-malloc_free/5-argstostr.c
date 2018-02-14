#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenate all the string input
 *
 * @ac: count arguments
 *
 * @av: input of arguments
 *
 * Return: grid or Null
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int count_a = 0, c1 = 0, c2 = 0, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (c1 < ac)
	{
		c2 = 0;
		while (av[c1][c2] != '\0')
		{
			count_a++;
			c2++;
		}
		c1++;
	}
	count_a++;
	str = malloc(sizeof(char) * count_a);
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (c1 = 0; c1 < ac; c1++)
	{
		for (c2 = 0; av[c1][c2] != '\0'; c2++)
		{
			str[c] = av[c1][c2];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}
