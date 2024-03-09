#include <iostream>

// reference ko.wikipedia.org/wiki/합병_정렬
void merge_sort(int arr[], int low, int high, int copyArr[])
{
	if (low >= high) return;

	int mid = (low + high) / 2;

	merge_sort(arr, low, mid, copyArr);
	merge_sort(arr, mid + 1, high, copyArr);

	int i = low, j = mid + 1, k = low;
	for (; k <= high; ++k)
	{
		if (j > high) copyArr[k] = arr[i++];
		else if (i > mid) copyArr[k] = arr[j++];
		else if (arr[i] <= arr[j]) copyArr[k] = arr[i++];
		else copyArr[k] = arr[j++];
	}

	for (i = low; i <= high; ++i)
	{
		arr[i] = copyArr[i];
	}
}

int main()
{
	int size(0);
	std::cin >> size;

	int* arr = new int[size] {};
	int* copyArr = new int[size] {};
	for (int i = 0; i < size; ++i)
	{
		int temp(0);
		std::cin >> temp;
		arr[i] = temp;
	}

	merge_sort(arr, 0, size - 1, copyArr);

	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << "\n";
	}

	delete[] copyArr;
	copyArr = nullptr;

	delete[] arr;
	arr = nullptr;
	return 0;
}
