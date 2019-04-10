#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double rand_1(int);
/**
 * main - this function calculate decimals of pi number depending of a number of
 * a number of iterations that the user give as argument
 * @ac: the number of args;
 * @av: the number of iterations
 */
int main(int ac, char *av[])
{
	double iter;
	double rnd_x;
	double rnd_y;
	int count = 1;
	int count2;
	double pi;
	double circ = 0;
	if (ac != 2)
	{
		dprintf(2, "please introduce just one number!\n");
		exit(99);
	}
	iter = atoi(av[1]);
	count2 = iter;
	printf("the number of iterations is: %.0f\n", iter);
	while (count <= iter)
	{
		rnd_x = rand_1(count);
		rnd_y = rand_1(count2);
		if (rnd_y <= sqrt(1- pow(rnd_x, 2)))
		 	circ++;
		count++;
		count2--;
	}
	pi = (4*circ) / (iter);
	printf("iter in circ: %0.f\n", circ);
	printf("the pi number is: %.20f", pi);
	return (0);
}
