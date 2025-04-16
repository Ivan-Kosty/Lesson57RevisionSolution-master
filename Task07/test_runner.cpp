#include "logic.h"

int main() {
	int array[]{ 1,2,3,4,5,6,7,8 };
	int value = 10;
	cout << (!binary_search(array, 9, value) ? "pass" : "fail") << endl;
	value = 5;
	cout << (binary_search(array, 9, value) ? "pass" : "fail") << endl;
	return 0;
}