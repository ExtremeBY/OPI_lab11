#include "Lab#6_1.h"
void chois1()
{
	char y;
	vi "Введите символ латинской буквы"; nl
	vv y;
	if (isalpha(y))
	{
		int lowercaseCode1 = tolower(y);
		int uppercaseCode1 = toupper(y);
		vi "Разница значений кодов в ASCII: " << uppercaseCode1 - lowercaseCode1; nl
	}
	else
	{
		vi "Ошибка: введенный символ не является буквой латинского алфавита";
	}

}