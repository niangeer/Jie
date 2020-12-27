#include "contact.h"

int main()
{
	contact_t con;
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
			printf("ByeBye!\n");
			break;
		case 1:
			AddContact(&con);
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			SearchContact(&con);
			break;
		case 4:
			ModContact(&con);
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			ClearContact(&con);
			break;
		case 7:
			SortContact(&con);
			break;
		default:
			printf("输入错误，请重新输入!\n");
			break;
		}
	}
	system("pause");
	return 0;
}