#include "Lab#6_1.h"
#include "Lab#6_2.h"
#include "Lab#6_3.h"
#include "Lab#6_4.h"
int main()
{
	int choise, n;
	SCOCP1251
	SCCP1251
	vi "�������� ������� �������������:"; nl
	vi "1 - ����������� ������� �������� ����� � ASCII ����� � ��������� � �������� ���������"; nl
	vi "2 - ����������� ������� �������� ����� � Windows - 1251 ����� � ��������� � �������� ���������"; nl
	vi "3 - ����� � ������� ���� �������, ���������������� ��������� �����"; nl
	vi "4 - ����� �� ���������"; nl
	vv choise;
	if (choise < 4)
	{
	    vi "������� �������� �� ������ ������?"; nl
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