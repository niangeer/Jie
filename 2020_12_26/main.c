#include "contact.h"

int main()
{
	//创建通讯录
	contact_t con;
	//初始化通讯录
	InitContact(&con);
	int quit = 0;
	int select = 0;
	while (!quit)
	{
		Menu();
		scanf("%d", &select);
		switch (select)
		{
		case 0:
			quit = 1;
			printf("Bye Bye!\n");
			break;
		case 1:
			Addperson(&con);
			break;
		case 2:
			Delperson(&con);
			break;
		case 3:
			Search(&con);
			break;
		case 4:
			Show(&con);
			break;
		default:
			printf("输入错误，请重新输入！\n");
		}
	}
	system("pause");
	return 0;
}