#include <stdio.h>
#include <Windows.h>

#pragma warning(disable:4996)

//int main()                                  //ftell
//{                                           //long int ftell ( FILE * stream );
//	FILE* fp = fopen("test.log", "w");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	for (int i = 'a'; i <= 'z'; i++)
//	{
//		int pos = ftell(fp);
//		printf("%d ", pos);
//		fputc(i, fp);
//	}
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()                                //fseek
//{                                         //int fseek ( FILE * stream, long int offset, int origin );
//	FILE* fp = fopen("test.log", "w");    //SEEK_CUR:��ǰλ��   SEEK_SET:��ͷλ��  SEEK_END:��βλ��
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	for (int i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, fp);
//	}
//	fseek(fp, -2, SEEK_CUR);
//	fputc('X', fp);
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	FILE* fp = fopen("test.log", "w");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	for (int i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, fp);
//	}
//	fseek(fp, 3, SEEK_SET);
//	fputs("XYZ", fp);
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	FILE* fp = fopen("test.log", "w");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	for (int i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, fp);
//	}
//	fseek(fp, 3, SEEK_END);        //λ��Ϊz�ĺ�һ��λ��
//	fputs("XYZ", fp);
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()                                  //��fseek��ftell����һ���ļ��Ĵ�С
//{
//	FILE* fp = fopen("test.log", "r");        //�ļ�ÿ�δ򿪽���"r"��"w"ʱ��ʱ�ص���ͷ��ƫ����Ϊ0��λ�ã�
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	printf("%d\n", ftell(fp));
//	fseek(fp, 0, SEEK_END);
//	printf("%d\n", ftell(fp));
//  fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()                                //rewind
//{                                         //void rewind ( FILE * stream );
//	FILE* fp = fopen("test.log", "r");    //�ص��ļ�����ʼλ��
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	int c = 'x';
//	do{
//		printf("begin:%d\n", ftell(fp));
//		c = fgetc(fp);
//		printf("  end:%d\n", ftell(fp));
//		rewind(fp);
//		printf("%c", c);
//		Sleep(500);
//	} while (c != EOF);
//	system("pause");
//	return 0;
//}