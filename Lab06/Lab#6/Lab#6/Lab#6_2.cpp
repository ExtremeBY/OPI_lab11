#include "Lab#6_2.h"
void choise2()
{
	char x;
	vi "������� ������ ������� �����"; nl
	vv x;
	if (isalpha(x))
	{
		long int lowercaseCode2 = static_cast<unsigned char>(tolower(x));
		long int uppercaseCode2 = static_cast<unsigned char>(toupper(x));
		vi "������� �������� ����� � Windows-1251: " << uppercaseCode2 - lowercaseCode2; nl
	}
	else
	{
		vi "������: ��������� ������ �� �������� ������ �������� ��������";
	}
	
}