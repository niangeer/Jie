#include"game.h"

void Menu()
{
	printf("#########################\n");
	printf("####1.Play     2.Exit####\n");
	printf("#########################\n");
	printf("Please Select# ");
}

void Game()
{
	srand((unsigned long)time(NULL));
	int random_num = rand() % RANGE + 1;
	printf("��׼�����ˣ���ʼ�ɣ�\n");
	while (1)
	{
		int input = 0;
		printf("���# ");
		scanf("%d", &input);
		if (input < random_num)
		{
			printf("��С��\n");

		}
		else if (input>random_num)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}

}