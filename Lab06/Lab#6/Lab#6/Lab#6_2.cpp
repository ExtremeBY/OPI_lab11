#include "Lab#6_2.h"
void choise2()
{
	char x;
	vi "Введите символ русской буквы"; nl
	vv x;
	if (isalpha(x))
	{
		long int lowercaseCode2 = static_cast<unsigned char>(tolower(x));
		long int uppercaseCode2 = static_cast<unsigned char>(toupper(x));
		vi "Разница значений кодов в Windows-1251: " << uppercaseCode2 - lowercaseCode2; nl
	}
	else
	{
		vi "Ошибка: введенный символ не является буквой русского алфавита";
	}
	
}