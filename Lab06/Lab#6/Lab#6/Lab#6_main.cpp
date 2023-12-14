#include "Lab#6_1.h"
#include "Lab#6_2.h"
#include "Lab#6_3.h"
#include "Lab#6_4.h"
int main()
{
	int choise, n;
	SCOCP1251
	SCCP1251
	vi "Выберите вариант использования:"; nl
	vi "1 - определение разницы значений кодов в ASCII буквы в прописном и строчном написании"; nl
	vi "2 - определение разницы значений кодов в Windows - 1251 буквы в прописном и строчном написании"; nl
	vi "3 - вывод в консоль кода символа, соответствующего введенной цифре"; nl
	vi "4 - выход из программы"; nl
	vv choise;
	if (choise < 4)
	{
	    vi "Сколько символов вы хотите ввести?"; nl
		vv n;
    }
	for (int i = 0; i < n; i++)
	{
		switch (choise)
		{
		case 1:
		{
			chois1();
			break;
		}
		case 2:
		{
			choise2();
			break;
		}
		case 3:
		{
			choi3();
			break;
		}
		case 4:
		{
			cho4();
			break;
		}
		}
	}
	pause
	
}