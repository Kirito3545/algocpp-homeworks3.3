#include <iostream>
#include "countSort.h"

void arrPrint(int* arr, const int arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		std::cout << arr[i] << "\t";
	};
	std::cout << std::endl;
};


int main()
{
	setlocale(LC_ALL, "Russian");

	int arr[] = { 21, 15, 19, 18, 23, 12, 18, 18, 19, 23, 12, 20, 15, 22, 21, 18, 19, 20, 12, 16, 20, 14, 17, 13, 10, 23, 19, 14, 10, 22, 19, 12, 24, 23, 22, 15, 13, 22, 18, 18, 11, 23, 24, 17, 10 };

	std::cout << "Массив до сортировки: \n";
	arrPrint(arr, std::size(arr));

	countSort(arr, std::size(arr));

	std::cout << "Массив после сортировки: \n";
	arrPrint(arr, std::size(arr));
}