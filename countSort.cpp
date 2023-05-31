#include "countSort.h"

void countSort(int* arr, const int arrSize)
{
	int arrMaxOfValue = -1;
	
	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] > arrMaxOfValue)
		{
			arrMaxOfValue = arr[i];
		}
	};
	std::cout << "arrMaxOfValue: " << arrMaxOfValue << std::endl;

	int arrForCountSize = arrMaxOfValue + 1;

	
	int* arrForCount = new int[arrForCountSize] {};

	
	for (int i = 0; i < arrSize; i++)
	{
		arrForCount[arr[i]]++;
	};

	int arrIndex = 0;
	for (int i = 0; i < arrForCountSize; ++i)
	{
		for (int j = 0; j < arrForCount[i]; ++j)
			arr[arrIndex++] = i;
	};

	delete[] arrForCount;
	arrForCount = nullptr;
};