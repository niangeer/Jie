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
//	int c = 'x';
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
//	system("pause");
//	return 0;
//}