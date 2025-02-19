#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)

int main(void)
{
	char str[5][16];

	memset(str, '?', sizeof(str));

	for (int i = 0; i < 5; i++)
	{
		str[i][15] = '\0';
	}

	for (int i = 0; i < 5; i++)
	{
		scanf("%s", str[i]);
	}

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (str[j][i] == '\0' || str[j][i] == '?')
			{
				continue;
			}

			printf("%c", str[j][i]);
		}
	}

	return 0;
}