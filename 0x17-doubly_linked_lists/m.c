#include <stdio.h>

int main(void)
{
	int *p;
	*p = 10;
	printf("%lu", &p);
}
