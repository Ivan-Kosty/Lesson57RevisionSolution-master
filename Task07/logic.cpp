#include "logic.h"
bool search(int* array, int first, int last, int value ) {
	if (last < first) {
		return false;
	}
	int middle = (last + first) / 2;
	if (array[middle] == value)
	{
		return true;
	}
	if (array[middle] > value) {
		last = middle - 1;
	}
	else {
		first = middle + 1;
	}
	return search(array, value, first, last);
}

bool binary_search(int* array, int size, int value) {
	if (!array || size <= 0) {
		return false;
	}
	return search(array, value, 0, size - 1);
}