#include <stdio.h>

void main()
{
#pragma region �迭
	// ���� �ڷ����� ������� �̷���� ���� ���մϴ�.
	
	//int Baeyoung[5];

	//// �迭�� ��� ù ��° ���Ҵ� 0���� �����մϴ�.

	//Baeyoung[0] = 100;
	//Baeyoung[1] = 200;
	//Baeyoung[2] = 300;
	//	
	//
	//

	//for (int i = 0; i < 5; i++)
	//{
	//	Baeyoung[i] = (i + 1) * 100;

	//	printf("Baeyoung[%d]�� �� : %d\n", i, Baeyoung[i]);
	//}

	//// �迭�� ���ϴ� ���ҿ� ���ϴ� ���� ������ �� ������,
	//// �迭�� ũ��� �������� �Ǵ� �������� ������ �޸�
	//// ������ ������ �˴ϴ�.

	//int list[] = { 10,20,30,45 }; // 16byte

	//int size = sizeof(list) / sizeof(int);

	//printf("�迭�� ������ %d\n", size);

	// �迭�� ũ��� ������ �� ������, �ʱ�ȭ ��Ͽ���
	// ������ ��ҿ� ���� �迭�� ũ�Ⱑ �����˴ϴ�.

	//int* ptr = NULL;

	//int intlist[5] = { 1, 2, 3, 4,5 };

	//ptr = intlist;


	//printf("ptr ������ �� : %p\n", ptr);
	//printf("intlist �迭�� ���� �ּ� : %p\n", intlist);

	//ptr = ptr + 1;
	//*ptr = 99;

	//printf("ptr ������ �� : %p\n", ptr);
	//printf("ptr ������ ����Ű�� �� : %d\n", *ptr);
	//printf("intlist �迭[1]�� ���� �ּ� : %p\n", &intlist[1]);

	//// �迭�� �������� �޸� ������ ������, �迭�� �̸��� �迭��
	//// ���� �ּҸ� �ǹ��մϴ�.


#pragma region ���ڿ�
	// �������� �޸� ������ ����� ����
	// ������ �����Դϴ�.

	//const char* string = "Computer";

	//// *string[0] = 'A'; (ERROR)

	//// %s : (���ڿ��� ����ϴ� ���� ������)
	//printf("string ������ �� : %s\n", string);

	//// ���ڿ��� ��� �����͸� �̿��Ͽ� ���ڿ� �����
	//// ����Ű���� �� �� ������, ���ڿ� ����� ������ ����
	//// �� �ϱ� ���� ������ ����Ǳ� ������ ���ڿ���
	//// ���� ������ �� �����ϴ�.

	//string = "Hello";
	//
	//printf("string ������ �� : %s\n", string);
	// ���ڿ��� ���鵵 �Բ� �޸� ������ �����Ͽ�
	// ũ�Ⱑ �����Ǹ�, �������� ���ڿ��� ���� �˷��ִ�
	// ���� ���ڰ� �߰��˴ϴ�.


	//// [A][l][i][s][t][a][r][\0]

	////char *const name
	//char name[10] = { "Alistar" };

	//printf("name ������ �� : %s\n",name);

	//name[4] = '\0';

	//// ���ڿ��� �����ϰ� �Ǹ� �� �������� ��ȿ��
	//// ���ڱ��� �޸� ������ ����˴ϴ�.
	//
	//printf("name ������ �� : %s\n", name);

	//// ���ڿ��� ��� ���� �������� �޸� ��������
	//// ����Ǿ� ������, ���� �迭 ���̿� ��ȿ�� ���ڸ�
	//// �ְ� �Ǹ� ��ȿ�� ���ڱ����� ���ڿ��� ����մϴ�.







#pragma endregion


#pragma region �ִ񰪰� �ּڰ�

  // [10] [35] [50] [2] [5]
  int dataList[ ] = { 10, 35, 50, 2, 5 };

  int max = 0;

  // �ִ� : 50 
  // �ּڰ� : 2

  int arratsize = sizeof(dataList) / sizeof(int);
  
  max = dataList[0];

  for (int i = 0; i < arratsize; i++)
 {
	if (max < dataList[i])
	{
		max = dataList[i];
	}
 }

  printf("dataList�� �ִ� : %d\n", max);

#pragma endregion



#pragma endregion


}