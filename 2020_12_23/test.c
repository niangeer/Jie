#include <stdio.h>
#include <Windows.h>

#pragma warning(disable:4996)

//int main()                                //�����ַ����Զ���������
//{
//	printf("hello""world""hello""bit\n");
//	const char* str = "hello""world";
//	printf(str);
//	system("pause");
//	return 0;
//}

//#define PRINT(s) printf(#s)
//int main()                              //#
//{                                       //ʹ�� # ����һ���������ɶ�Ӧ���ַ���
//	PRINT(10 + 20 + 30);                  //����10+20+30�滻Ϊ"10+20+30"
//	system("pause");
//	return 0;
//}


//#define PRINT(FORMAT,VALUE) printf("the value of " #VALUE " is " FORMAT "\n", VALUE)
//int main()
//{
//	PRINT("%d", 10+20);
//	system("pause");
//	return 0;
//}


//#define MAKE(n,v) sum##n+=v
//int main()                          //##
//{                                   //##���԰�λ�������ߵķ��źϳ�һ�����š� ������궨��ӷ�����ı�Ƭ�δ�����ʶ��
//	int sum1 = 10;                  //ע�� ���������ӱ������һ���Ϸ��ı�ʶ����������������δ�����
//	printf("sum1=%d\n", sum1);
//	MAKE(1, 20);
//	printf("sum1=%d\n", sum1);
//	system("pause");
//	return 0;
//}

//#undef ����ָ�������Ƴ�һ���궨�塣