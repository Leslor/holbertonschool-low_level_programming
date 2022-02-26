#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - main functions
 * @argc: argument count
 * @argv: pointer to a string
 * Return: print all argv
 * _change - make change for an amount of money
 * @i: iterator for the array
 * @money: the amount to change with coins
 * @numcoins: number of coins used for change
 */
int _change(int i, int money, int numcoins)
{
	int coins[5] = {25, 10, 5, 2, 1};

	while (money > 0)
	{
		if (coins[i] > money)
			return _change(i+1, money, numcoins);
		else if (coins[i] == money)
		{
			numcoins +=1;
			return (numcoins);
		}
		if (coins[i] < money)
		{
			numcoins +=1;
			money = money - coins[i];
			return _change(i, money, numcoins);
		}
	}
	return (0);
}

int main(int argc, char *argv[])
{
	int money, result;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money <= 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		result = _change(0, money, 0);
		printf("%d\n", result);
		return (0);
	}
}
