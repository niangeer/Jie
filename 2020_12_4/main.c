#include"game.h"  //include,����define

int main()
{	
	Login();
	int quit = 0;
	while (!quit)
	{
		Menu();
		int select = 0;
		scanf("%d", &select);    //�ǵ�&
		switch (select)
		{
		case 1:
			Game();
			printf("����һ����\n");
			break;
		case 2:
			quit = 1;
			printf("Bye Bye\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	}
	system("pause");
	return 0;
}