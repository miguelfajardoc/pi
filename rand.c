#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double rand_1(int p)
{

	double ran;
	double s;
	int i;
	srand(time(0) * p);
	ran = random();
	s = ran / 100000.00;
	i = (int)s;
	s = s - i;

	return (s);
}
