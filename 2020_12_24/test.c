#include <stdio.h>
#include <Windows.h>

#pragma warning(disable:4996)

//int main()                         //��������Ԥ�������   ��־
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	system("pause");
//	return 0;
//}

////#define F 1
//#define F              //���Բ�����ֵ
//int main()
//{
//#ifdef F
//	printf("1");
//#endif
//	system("pause");
//	return 0;
//}


//int main()
//{
////#define a 1
//#define a              //�����Բ�����ֵ
//#if a==1
//	printf("1");
//#else
//	printf("2");
//#endif
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 1;
//#if a==1                 //1�����Ѷ���  2������ֵ
//	printf("1");
//#else
//	printf("2");
//#endif
//	system("pause");
//	return 0;
//}

//int main()                
//{
//#ifndef F            
//#define F           //��δ����F������F
//	printf("1");
//#endif
//#ifndef F           //F�Ѷ��岻�ٽ��ж��壬�����ڱ���ͷ�ļ����ظ�����
//#define F
//	printf("2");
//#endif
//	system("pause");
//	return 0;
//}

//����ͷ�ļ��ظ���������ַ�ʽ��1��#pragma once
//                              2��#ifndef  _TEST_H_ 
//                                 #define  _TEST_H_ 
//                                //ͷ�ļ�����
//                                 #endif
//1, #pragma warning (disable:4996)
//2, #pragma once 
//3, #pragma pack()      //�ṹ��Ĭ�϶�����������