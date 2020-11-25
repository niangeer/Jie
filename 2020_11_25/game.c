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
	printf("我准备好了，开始吧！\n");
	while (1)
	{
		int input = 0;
		printf("你猜# ");
		scanf("%d", &input);
		if (input < random_num)
		{
			printf("猜小了\n");

		}
		else if (input>random_num)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}

}