#include <stdio.h>
#include <windows.h>

#pragma warning(disable:4996)

//int main()                 //�������Ĵ洢
//{
//	int n = 9;               
//	float* fp =(float*) &n;
//	printf("%d\n", n);       //0000 0000 0000 0000 0000 0000 0000 1001
//	printf("%f\n", n);       //0 00000000 0000 0000 0000 0000 0000 000  //�м���Ϊ127
//	printf("%f\n", *fp);     //S     E               M
//	*fp = 9.0;               //1001 = 1.001*2^3   S=0  E=3  M=001
//	printf("%d\n", n);       //0 10000010 0010 0000 0000 0000 0000 000
//	printf("%f\n", *fp);
//	system("pause");
//	return 0;
//}

//int main()              //����������˵�����ݴ���ڴ�����ʵ��ŵ��ǲ���
//{
//	char a = 10;          //0000 1010
//	                       // 0    A
//	char q = -10;         //1111 0110
//	                       // F    6
//	unsigned char x = -1;  //�����255��unsigned char����ȡֵΪ0~255
//	signed char z;         //1000 0000  (-0)�涨Ϊ-128��ȡֵΪ-128~127
//	system("pause");
//	return 0;
//}


//int check_sys()
//{
//	int i = 257;
//	return (*(char*)&i);
//}
//int main()                         //�жϴ�С��
//{
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	system("pause");
//	return 0;
//}

