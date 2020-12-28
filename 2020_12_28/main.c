#include "contact.h"

int main()
{
	contact_t* ct = InitContact();
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
			AddContact(&ct);
			break;
		case 2:
			DelContact(ct);
			break;
		case 3:
			Search(ct);
			break;
		case 4:
			ModContact(ct);
			break;
		case 5:
			ShowContact(ct);
			break;
		case 6:
			ClearContact(ct);
			break;
		case 7:
			SortContact(ct);
			break;
		default:
			printf("输入错误，请重新选择!\n");
			break;
		}
	}
	system("pause");
	return 0;
}