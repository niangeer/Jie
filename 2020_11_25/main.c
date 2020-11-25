#include"game.h"

int main()
{
	int quit = 0;
	while (!quit)
	{
		Menu();
		int select = 0;
		scanf("%d", &select);

		switch (select)
		{
		case 1:
			Game();
			printf("再来一把？\n");
			break;
		case 2:
			quit = 1;
			printf("Bye Bye\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;

		}
	}
	system("pause");
	return 0;
}