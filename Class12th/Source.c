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

struct Node

{
	int data;
	struct Node* next;

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

	//struct character
	//{
	//	int x;
	//	int y;
	//};

	//struct Enemy
	//{
	//	int x;
	//	int y;
	//};
	//
	//struct character character = {0,0};

	//struct Enemy Enemy = { 6.4 };

	//double resultx = character.x - Enemy.x;
	//double resulty = character.y - Enemy.y;

	//double distance = sqrt(pow(resultx, 2) + pow(resulty, 2));

	//if (distance <= 5.0f)
	//{
	//	printf("���� �����Դϴ�.");
	//}
	//else
	//{
	//	printf("���� ������ �ƴմϴ�.");
	//}
	//struct character p1;
	//struct Enemy p2;

	//p1.x = 0;
	//p1.y = 0;

	//p2.x = 6;
	//p2.y = 4;

	//int a = p2.x - p1.x;    
	//int b = p2.y - p1.y;   

	//double c = sqrt((a * a) + (b * b));

	//printf("%f\n", c);
	//
	////���� ���� ���ϰ� Ǯ�� 


	//printf("pow 2�� 3�� : %lf\n", pow(2,3));
	//printf("Root 25 : %lf\n", sqrt(25));

#pragma endregion

#pragma region �ڱ� ���� ����ü

	/*struct Node* CurrentNode = NULL;

	struct Node node1 = { 10, NULL };
	struct Node node2 = { 20, NULL };
	struct Node node3 = { 30, NULL };

	node1.next = &node2;
	node2.next = &node3;
	node3.next = NULL;

	CurrentNode = &node1;

	while(CurrentNode != NULL)
	{
		printf("CurrentNode.data = %d\n", CurrentNode->data);
		CurrentNode = CurrentNode->next;

	}*/



#pragma endregion

	return 0;
}
