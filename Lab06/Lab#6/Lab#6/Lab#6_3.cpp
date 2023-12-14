#include "Lab#6_3.h"
void choi3()
{
	char c3;
	vi "Введите цифру"; nl
	vv c3;
	if (isdigit(c3))
	{
		vi "Код символа " << static_cast<int>(c3); nl
	}
	else
	{
		vi "Ошибка: введенный символ не является цифрой"; nl
	}

}