#include <stdio.h>
#include <stdlib.h> // �޸� ���� ���̺귯��

int main()
{
#pragma region ���� ������ 
	// �ڷ����� �������� ���� ���·� ��� �ڷ�����
	// ������ �� �ִ� �������Դϴ�.

	//int attack = 100;
	//float health = 100.0f;


	//void* vptr = NULL;

	//vptr = &attack;

	//// ���� �����ʹ� �޸� �ּҿ� �����ؼ� ���� ������ �� �����ϴ�.
	//printf("vptr�� ����Ű�� �� : %d\n", *(int *)vptr);

	//vptr = &health;

	//printf("vptr�� ����Ű�� �� : %f\n", *(float *)vptr);
	// ���� �����ͷ� ������ �޸𸮿� �����Ϸ��� ���� �����Ͱ� ����Ű��
	//// ������ �ڷ������� �� ��ȯ�ؾ� �մϴ�.




#pragma endregion

#pragma region ���� �Ҵ�
	//// ���α׷��� �����ϴ� �߿� �ʿ��� ��ŭ �޸𸮸� �Ҵ�
	//// �ϴ� �۾��Դϴ�.

	//int * ptr = malloc(sizeof(int));
	////int * ptr (����)
	////malloc(sizeof(int)); (��)


	//*ptr = 100;
	//// �޸𸮸� ���� �Ҵ��� �� �ּҸ� ���� �����ͷ�
	//// ��ȯ�ϱ� ������ �ڷ����� ��ȯ�� ���� �޸𸮿�
	//// �Ҵ��ؾ� �մϴ�.



	//printf("*ptr�� ����Ű�� �� %d\n", *ptr);

	//free(ptr); 
	//// �������� �Ҵ��� �޸𸮴� �� ������ �����Ǿ� �����Ƿ�
	//// ����� ������ ���� ���� ���־�� �մϴ�.


	//// ptr [] -------> [999] [333] [] [] []
	//ptr = malloc(sizeof(int) * 5);

	//// ���� �Ҵ��� ���� �ð��� ���������� �޸��� ũ�⸦
	//// ���� ��ų �� ������, �������� �޸��� ũ�⸦ �Ҵ���
	//// �� ����Ʈ ������ �����մϴ�.

	//ptr[0] = 999;
	//ptr[1] = 333;

	//printf("*ptr[0]�� ����Ű�� �� %d\n", ptr[0]);
	//printf("*ptr[0]�� ����Ű�� �� %d\n", ptr[1]);

	//// free(ptr);
	//// �޸𸮸� �������� �Ҵ��� ���¿��� �������� ������
	//// �޸� ���� ������ �Ͼ��, �޸� ������ �Ͼ�� �Ǹ�
	//// �� �̻� �޸𸮸� �Ҵ��� �� ���� ���°� �˴ϴ�.



#pragma endregion

#pragma region ���� �� ���
	// �� ���꿡 �� �Ŀ����� �� ���ʿ� �ִ� �����
	// "����"�̸� ������ �ǿ������� ���� ������ �ʰ�
	// �ٷ� ����� ���� ����Դϴ�.

		// true && true // true (����)
		// true && false // false (����)
		// true || false // true (����)
		// false || true // true (����)

	//int x = 0;
	//int y = 0;

	//if (x < y || ++x)
	//{
	//	printf("short curcuit\n");
	//}
	//	printf("x ������ �� : %d\n", x);

	//if (x < y || y++)
	//{
	//	printf("short curcuit\n");
	//}
	//	printf("y ������ �� : %d\n", y);

#pragma region ASCII �ƽ�Ű �ڵ�
	// �̱� ���� ǥ�� ��ȸ���� ǥ��ȭ��
	// ���� ��ȯ�� 7 bit ��ȣ ü���Դϴ�.

//char alphabet = 'A';
//
//    // A~Z
//    char ch;
//    for (ch = 'A'; ch <= 'z'; ch++)
//    {
//	printf("%c", ch);
//    }
//
//     return 0;
//
//	 const char* hangeul = "��";


#pragma endregion


#pragma endregion

	return 0;


}