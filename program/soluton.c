#include <stdio.h>

void Instantiate()
{
	printf("Instantiate");

}

void Factorial(int x)
{

}



int main()
{
       //pull request
#pragma region �Լ� ������
	// �Լ��� �ּҰ��� �����ϰ� ����ų �� �ִ� ������ ���� �Դϴ�.

	// ��ȯ���� �Ű� ������ ���� �Լ� �����͸� �����մϴ�.
	// void (*ptr) ();
	int (*iptr) (int);

	//ptr ������ Instantiate �Լ��� �ּҸ� �����մϴ�.
	//ptr = Instantiate;

	// �Լ� �����͸� ȣ���մϴ�.
	//ptr();

	//iptr = Factorial;

	//int number = 0;

	//scanf_s("%d, &number");

	//iptr = Factorial;
	//printf("Factorial�� �� : %d\n", number, iptr(number));
	//iptr(5);

	// �Լ� �����ʹ� �Լ��� ��ȯ���� �Ű� ������ Ÿ���� ��ġ�ؾ� �ϸ�,
	// �Լ� �����͸� ����Ͽ� �������� �޸𸮸� �Ҵ��� �� �����ϴ�.


#pragma endregion

#pragma region ���� ������
	
	//int data = 100;

	//int* sptr = &data;

	//int** dptr = &sptr;

	//printf("*sptr�� �� : %d\n", *sptr);
	//printf("*dptr�� �� : %p\n", *dptr);

	//**dptr = 999;

	//printf("data�� �� : %d\n", data);





#pragma endregion

	return 0;
}
