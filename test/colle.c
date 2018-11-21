#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void		print_line(char first, char middle, char end, int length)
{
	int		i;

	if (length > 0)
		write(1, &first, 1);
	if (length - 2 >= 0)
	{
		i = 1;
		while (i < length - 1)
		{
			write(1, &middle, 1);
			i++;
		}
		write(1, &end, 1);
	}
	printf("\n");
	if (length <= 0)
		write(1, "nothing to print\n", 17);
}

int			main(int ac, char **av)
{
	if (ac != 3)
	{
		write(1, "not the right number of arguments\n", 35);
		return (0);
	}
	print_line('o', '-', 'o', atoi(av[1]));
	return (0);
}
