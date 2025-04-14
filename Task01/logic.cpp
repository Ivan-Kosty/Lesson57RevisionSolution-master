// [The Count of Even Digits]
// Количество чётных цифр 
//
// Необходимо разработать рекурсивную функцию, которая подсчитывает 
// количество чётных цифр у заданного пользователем целого числа.
// Число может быть как положительным, так и отрицательным.
// Не забудьте, что цифра ноль в математике является чётным числом. 

#include "logic.h"

//int count_even_digits(long long number) {
//	return -1;
//}


//12345 / 10 = 1234 / 10 = 123 / 10 = 12 / 10 = 1 / 10 = 0 / 10 
int count_even_digits(long long number) {
	if (number < 10 && number > -10) {
		return number % 2 == 0 ? 1 : 0;
	}

	int d = number % 10;

	return (d % 2 == 0 ? 1 : 0) + count_even_digits(number / 10);
}