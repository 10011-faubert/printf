#include <stdio.h>

int		main()
{
	int		a;
	a = (int)(void*)0;

	printf("ret : %d\n", printf("%.p\n", &a));
	return (0);
}
