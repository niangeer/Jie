#include <stdio.h>
#include <Windows.h>

#pragma warning(disable:4996)

//int main()                                    //"r":只读    "w":只写（覆盖式写） "a":追加（在尾部进行再次书写）
//{
//	FILE* fp = fopen("test.log", "w");          //fopen
//	if (NULL == fp)                             
//	{
//		printf("fopen error!\n");
//		system("pause");
//		return 1;
//	}
//	fclose(fp);                                 //fclose
//	system("pause");
//	return 0;
//}

//int main()
//{
//	FILE* fp = fopen("C:\\Users\\DELL\\Documents\\Visual Studio 2013\\Projects\\文件操作\\test_.log", "r");
//	if (NULL == fp)
//	{
//		printf("fopen error!\n");
//		system("pause");
//		return 1;
//	}
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()                                 //fputc
//{                                          //int fputc ( int character, FILE * stream );
//	FILE* fp = fopen("test.log", "w");
//	if (NULL == fp)
//	{
//		printf("fopen error!\n");
//		system("pause");
//		return 1;
//	}
//	for (int i = 'a'; i <= 'z';i++)
//	{
//		//printf("%c ", i);
//		//fputc(i, stdout);
//		fputc(i, fp);
//	}
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()                                  //fgetc
//{                                           //int fgetc ( FILE * stream );
//	FILE* fp = fopen("test.log", "r");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	int c = 'x';                              // 注意：int，非char，要求处理EOF
//	while (c != EOF)
//	{
//		c = fgetc(fp);
//		printf("%c", c);
//	}
//	printf("\n");
//	fclose(fp);
//	system("pause");
//	return 0;
//}


//int main()                                 //fputs
//{                                          //int fputs ( const char * str, FILE * stream );
//	FILE* fp = fopen("test.log", "w");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	fputs("hello world!\n", fp);
//	fputs("hello China!\n", fp);
//	fputs("hello!\n", fp);
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()                                       //fgets
//{                                                //char * fgets ( char * str, int num, FILE * stream );
//	FILE* fp = fopen("test.log", "r");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	char str[64];
//	for (int i = 0; i < 3; i++)
//	{
//		fgets(str, 64, fp);
//		printf("%s\n", str);
//	}
//	fclose(fp);
//	system("pause");
//	return 0;
//}



//int main()                                         //fprintf
//{                                                  //int fprintf ( FILE * stream, const char * format, ... );
//	FILE* fp = fopen("test.log", "w");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	fprintf(fp, "hello %d,hello %c,hello %f\n", 100, 'c', 0.04);
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()                                      //fscanf
//{                                               //int fscanf ( FILE * stream, const char * format, ... );
//	FILE* fp = fopen("test.log", "r");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	int i = 0;
//	char c = 0;
//	double f = 0.0;
//	fscanf(fp, "hello %d,hello %c,hello %lf\n", &i, &c, &f);
//	fclose(fp);
//	system("pause");
//	return 0;
//}


//int main()                                  //ftell
//{                                           //long int ftell ( FILE * stream );
//	FILE* fp = fopen("test.log", "w");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	for (int i = 'a'; i <= 'z'; i++)
//	{
//		long pos = ftell(fp);
//		printf("%d ", pos);
//		fputc(i, fp);
//	}
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()                                //fseek
//{                                         //int fseek ( FILE * stream, long int offset, int origin );
//	FILE* fp = fopen("test.log", "w");    //SEEK_CUR:当前位置   SEEK_SET:开头位置  SEEK_END:结尾位置
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
//	fseek(fp, 3, SEEK_END);        //位置为z的后一个位置
//	fputs("XYZ", fp);
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()                                  //用fseek与ftell计算一个文件的大小
//{
//	FILE* fp = fopen("test.log", "r");        //文件每次打开进行"r"与"w"时都时回到开头（偏移量为0的位置）
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
//	FILE* fp = fopen("test.log", "r");    //回到文件的起始位置
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
//		printf("%c\n", c);
//		Sleep(500);
//	} while (c != EOF);
//	system("pause");
//	return 0;
//}

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

