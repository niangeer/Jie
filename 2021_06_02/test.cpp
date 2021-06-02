//��Ŀ���Ա�����
//
//��Ŀ������
//    NowCoder���Ա��Ͽ���һ�����ꡣ���������·�Ϊ������ʱ�򣬵���ÿ����׬1Ԫ������ÿ����׬2Ԫ��
//    ���ڸ���һ��ʱ�����䣬������������������ж��١�
//
//�������� :��������������ݡ�
//    ÿ�����ݰ�����������from��to(2000 - 01 - 01 �� from �� to �� 2999 - 12 - 31)��
//    ������������������ʾ���ÿո������year month day��
//
//���������
//    ��Ӧÿһ�����ݣ�����ڸ��������ڷ�Χ��������ʼ�ͽ������ڣ�����׬����Ǯ��
//
//ʾ����
//	����
//	2000 1 1 2000 1 31
//	2000 2 1 2000 2 29
//	���
//	62
//	29

#include <iostream>
using namespace std;

bool LeapYear(int year) 
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		return true;
	}
	return false;
}

int ProfitYear(int year) //������
{
	return 31 * 2 + 28 + 31 + 30 * 2 + 31 + 30 * 2 + 31 + 31 * 2 + 30 * 2 + 31 * 2 + 30 + 31 * 2 + LeapYear(year);
}

int ProSum(int year, int month, int day)
{
	int arr[13] = { 0, 62, 90, 121, 181, 212, 272, 303, 365, 425, 487, 517, 579 };
	int ret = 0;

	if (month == 2 || month == 3 || month == 5 || month == 7 || month == 11)
		ret = arr[month - 1] + day;
	else
		ret = arr[month - 1] + day * 2;

	if (LeapYear(year))
		ret++;

	return ret;
}

int main()
{
	int year1, month1, day1;
	int year2, month2, day2;
	while (cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2)
	{
		int ret = 0;
		if (year1 == year2)
		{
			ret = ProSum(year2, month2, day2) - ProSum(year1, month1, day1);
		}
		else
		{
			//�������ڵ��������
			ret = ProSum(year2, month2, day2);
			//��ʼ���ڵ��������
			ret += ProfitYear(year1) - ProSum(year1, month1, day1);
			year1++;

			//�м�����������
			while (year1 != year2)
			{
				ret += ProfitYear(year1);
				year1++;
			}
		}
		cout << ret << endl;
	}
	return 0;
}