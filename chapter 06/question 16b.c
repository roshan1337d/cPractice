#include <stdio.h>
#define SIZE 5
int main()
{
	for (int y = 1; y <= SIZE; y += 1)
	{
		for (int x = 1; x <= SIZE; x += 1)
		{
			if (x == 1 || x == SIZE || y == 1 || y == SIZE)
			{
				printf("S ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return (0);
}