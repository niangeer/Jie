#include <stdio.h>
#include <Windows.h>

#pragma warning(disable:4996)

//int main()                          //二进制文件
//{
//	int a = 10000;
//	FILE* fp = fopen("test.txt", "wb");   //"wb":二进制输出（实际只起强调作用，实际输入文本还是文件得看接口）
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	fwrite(&a, sizeof(int), 1, fp);       //fwrite   二进制的形式输出到文件中
//	fclose(fp);                           //size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream );
//	fp = NULL;
//	system("pause");
//	return 0;
//}

//int main()                      //打开方式用"wb"，接口用fprintf，得到的是文本文件
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

//int main()                                //打开方式用"w"，接口用fwrite，得到的是文本文件
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

//int main()                                  //打开方式用"w"，接口用fprintf，得到的是文本文件
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
//	int c;                                     // 注意：int，非char，要求处理EOF
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
//	FILE* fp = fopen("data.txt", "wb+");       //打开方式：读写
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
//	rewind(fp);                             //写入后回到最开始进行读取
//	printf("%d\n", ftell(fp));
//	double b[3] = { 0.0 };
//	while (fread(b, sizeof(double), 3, fp)>0)
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			printf("%f\n", b[i]);           //双层循环，打印12次，后面两个为缓冲区未被覆盖的遗留值
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
//	FILE* p = fopen("data.txt", "rb");              //文件关闭后再次打开
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

//int main()                                   //缓冲区(本质上为一块内存)
//{                                            //无缓冲：没有缓冲区     
//	FILE* fp = fopen("data.txt", "wb");        //行缓冲：通常是用于显示器上（用特殊字符触发刷新机制）
//	if (NULL == fp)                            //全缓冲：通常是用于普通文件（写满才刷新）
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
//	fflush(fp);                             //强制刷新
//	printf("fflush done...\n");
//	Sleep(1000);
//	printf("sleep ing...\n");
//	Sleep(5000);
//	printf("sleep end...\n");
//	fclose(fp);
//	system("pause");
//	return 0;
//}