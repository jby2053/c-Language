#include <stdio.h>
#include <math.h>

struct player
{
	// ����ü ũ���� ��� ��� ������ ������ ���� �޸��� ũ�Ⱑ �ٸ���
	// ������ �� �ֽ��ϴ�.

	char blood;     // 1 byte
	int health;     // 4 byte
	float attack;   // 4 byte
	double defense; // 8 byte



	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������
	// �������� �����Ƿ�, ����ü ���ο� �ִ� �����͸�
	// �ʱ�ȭ�� �� �����ϴ�.
};

int main()
{
#pragma region ����ü
	// ���� ���� ������ �ϳ��� �������� ����ȭ�� ����
	// �ϳ��� ��ü�� �����ϴ� ���Դϴ�.
	
	//struct player player = { 'B', 75, 5.5f };

	////player.attack = 10.5f;
	////player.blood = 'A';
	////player.health = 100;

	//printf("player.attack�� �� : %f\n", player.attack);
	//printf("player.blood�� �� : %c\n", player.blood);
	//printf("player.health�� �� : %d\n", player.health);

#pragma endregion

#pragma region  ����Ʈ �е�
   // ��� ������ �޸𸮿��� CPU�� ���� �� �� ���� �и� ��
   // �ֵ���, �����Ϸ��� ���������� ��Ͽ� ���߾� ����Ʈ��
   // �е����ִ� ����ȭ �۾��Դϴ�.

	//printf("player ����ü�� ũ�� : %d\n", sizeof(struct player));
   
	// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿��� ũ�Ⱑ ���� ū
	// �ڷ����� ����� �ǵ��� �����մϴ�. 

#pragma endregion

#pragma region �� �� ������ �Ÿ�

	struct character
	{
		int x;
		int y;
	};

	struct Enemy
	{
		int x;
		int y;
	};
	

		struct character;   
		struct Enemy;    

		
		character.x = 0;
		p1.y = 0;

		
		p2.x = 6;
		p2.y = 5;

		printf("p1: %d %d\n", p1.x, p1.y);    
		printf("p2: %d %d\n", p2.x, p2.y);    

		

	






	



	printf("pow 2�� 3�� : %lf\n", pow(2,3));
	printf("Root 25 : %lf\n", sqrt(25));

#pragma endregion


#pragma endregion


	return 0;
}