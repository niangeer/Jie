#include <stdio.h>
#include <Windows.h>

#pragma warning(disable:4996)

//int main()                          //�������ļ�
//{
//	int a = 10000;
//	FILE* fp = fopen("test.txt", "wb");   //"wb":�����������ʵ��ֻ��ǿ�����ã�ʵ�������ı������ļ��ÿ��ӿڣ�
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	fwrite(&a, sizeof(int), 1, fp);       //fwrite   �����Ƶ���ʽ������ļ���
//	fclose(fp);                           //size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream );
//	fp = NULL;
//	system("pause");
//	return 0;
//}

//int main()                      //�򿪷�ʽ��"wb"���ӿ���fprintf���õ������ı��ļ�
//{
//	int a = 10000;
//	FILE* fp = fopen("test.txt", "wb");  
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	fprintf(fp, "%d", a);
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()                                //�򿪷�ʽ��"w"���ӿ���fwrite���õ������ı��ļ�
//{
//	int a = 10000;
//	FILE* fp = fopen("test.txt", "w");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	fwrite(&a, sizeof(int), 1, fp);
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()                                  //�򿪷�ʽ��"w"���ӿ���fprintf���õ������ı��ļ�
//{
//	int a = 10000;
//	FILE* fp = fopen("test.txt", "w");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	fprintf(fp, "%d", a);
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()                                    //feof:file End Of File
//{                                             //int feof ( FILE * stream );
//	FILE* fp = fopen("test.log", "w");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	for (int i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, fp);
//	}
//	fclose(fp);
//	FILE* p = fopen("test.log", "r");
//	if (NULL == p)
//	{
//		return 2;
//	}
//	int c;                                     // ע�⣺int����char��Ҫ����EOF
//	while ((c = fgetc(p)) != EOF)
//	{
//		printf("%c ", c);
//	}
//	printf("\n");
//	if(feof(p))
//	{
//		puts("End of file reached successfully");
//	}
//	fclose(p);
//	system("pause");
//	return 0;
//}


//#define SIZE 10                                //fread
//int main()                                     //size_t fread ( void * ptr, size_t size, size_t count, FILE * stream );
//{
//	double a[SIZE] = { 3.14, 3.15, 3.16, 3.17, 3.18, 3.14, 3.15, 3.16, 3.17, 3.18 };
//	FILE* fp = fopen("data.txt", "wb+");       //�򿪷�ʽ����д
//	if (NULL == fp)
//	{
//		return 1;
//	}
////	fwrite(a, sizeof(double), SIZE,fp);
//	for (int i = 0; i < SIZE; i++)
//	{
//		fwrite(a + i, sizeof(double), 1, fp);
//	}
//	printf("%d\n", ftell(fp));
//	rewind(fp);                             //д���ص��ʼ���ж�ȡ
//	printf("%d\n", ftell(fp));
//	double b[3] = { 0.0 };
//	while (fread(b, sizeof(double), 3, fp)>0)
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			printf("%f\n", b[i]);           //˫��ѭ������ӡ12�Σ���������Ϊ������δ�����ǵ�����ֵ
//		}
//	}
//	if (feof(fp))
//	{
//		printf("read file end...!\n");
//	}
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//#define SIZE 10                             //fread
//int main()                                  //size_t fread ( void * ptr, size_t size, size_t count, FILE * stream );
//{
//	double a[SIZE] = { 3.14, 3.15, 3.16, 3.17, 3.18, 3.14, 3.15, 3.16, 3.17, 3.18 };
//	FILE* fp = fopen("data.txt", "wb");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	//fwrite(a, sizeof(double), SIZE,fp);
//	for (int i = 0; i < SIZE; i++)
//	{
//		fwrite(a + i, sizeof(double), 1, fp);
//	}
//	fclose(fp);                                      
//	FILE* p = fopen("data.txt", "rb");              //�ļ��رպ��ٴδ�
//	if (NULL == p)
//	{
//		return 2;
//	}
//	double b[3] = { 0.0 };
//	size_t s = fread(b, sizeof(double), 3, p);
//	printf("%d\n", s);
//    s = fread(b, sizeof(double), 3, p);
//	printf("%d\n", s);
//    s = fread(b, sizeof(double), 3, p);
//	printf("%d\n", s);
//    s = fread(b, sizeof(double), 3, p);
//	printf("%d\n", s);
//	fclose(p);
//	system("pause");
//	return 0;
//}

//#define SIZE 10
//int main()
//{
//	double a[SIZE] = { 3.14, 3.15, 3.16, 3.17, 3.18, 3.14, 3.15, 3.16, 3.17, 3.18 };
//	FILE* fp = fopen("data.txt", "wb+");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	fwrite(a, sizeof(double), SIZE, fp);
//	rewind(fp);
//	double b[3] = { 0.0 };
//	while (1)
//	{
//		size_t s = fread(b, sizeof(double), 3, fp);
//		printf("%d\n", s);
//		if (s < 3)
//		{
//			break;
//		}
//	}
//	if (feof(fp))
//	{
//		printf("read file end...\n");
//	}
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()                                   //������(������Ϊһ���ڴ�)
//{                                            //�޻��壺û�л�����     
//	FILE* fp = fopen("data.txt", "wb");        //�л��壺ͨ����������ʾ���ϣ��������ַ�����ˢ�»��ƣ�
//	if (NULL == fp)                            //ȫ���壺ͨ����������ͨ�ļ���д����ˢ�£�
//	{
//		return 1;
//	}
//	char buf[] = "abcd1234";
//	fwrite(buf, sizeof(buf), 1, fp);
//	printf("sleep ing...\n");
//	Sleep(5000);
//	printf("sleep end...\n");
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	FILE* fp = fopen("data.txt", "wb");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	char buf[] = "abcd1234";
//	fwrite(buf, sizeof(buf), 1, fp);
//	Sleep(20000);
//	fflush(fp);                             //ǿ��ˢ��
//	printf("fflush done...\n");
//	Sleep(1000);
//	printf("sleep ing...\n");
//	Sleep(5000);
//	printf("sleep end...\n");
//	fclose(fp);
//	system("pause");
//	return 0;
//}