#include <stdio.h>

using namespace std;

int main()
{
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int target = 5;
	int index = search(array, target);
	if (index == -1)
	{
		printf("Target not found");
	}
	else
	{
		printf("Target found at index %d", index);
	}
}

int search(int arr[], int target)
{
	for (int i = 0; i < arr.length; i++)
	{
		if (arr[i] == target)
		{
			return i;
		}
	}
	return -1;
}