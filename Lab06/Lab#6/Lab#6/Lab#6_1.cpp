#include "Lab#6_1.h"
void chois1()
{
	char y;
	vi "������� ������ ��������� �����"; nl
	vv y;
	if (isalpha(y))
	{
		int lowercaseCode1 = tolower(y);
		int uppercaseCode1 = toupper(y);
		vi "������� �������� ����� � ASCII: " << uppercaseCode1 - lowercaseCode1; nl
	}
	else
	{
		vi "������: ��������� ������ �� �������� ������ ���������� ��������";
	}

}