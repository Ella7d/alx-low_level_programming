#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if no errors
 *
 */
int main(int argc, char *argv[])

{
	int a, b;
	int (*fptr)(int, int);

		if (argc != 4)
		{
			printf("Error\n");
			exit(98);
		}
		if (argv[2][1])
		{
			printf("Error\n");
			exit(99);
		}

		fptr = get_op_func(argv[2]);

		if (fptr == NULL)
		{
			printf("Error\n");
			exit(99);
		}

		a = atoi(argv[1]);
		b = atoi(argv[3]);

		printf("%d\n", fptr(a, b));
		return (0);
}
