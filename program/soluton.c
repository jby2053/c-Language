#include <stdio.h>

void Function()
{
	printf("Function");
}

int Add(int x, int y)
{
	return x + y;
}

int Minus(int x, int y)
{
	return x - y;
}
	
int Multple(int x, int y)
{
	return x * y;
}

int Divide(int x, int y)
{
	return x / y;
}
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    // �Լ��� ȣ���� �� ������ ���� �μ��� �����ϰ� �Ǹ�
    // �Լ��� �Ű� ������ ������ ����� ���� ���޵Ǳ� ������
    // �μ��� ������ ������ �Լ� ������ �Ͼ ���꿡 ����
    // ������ ���� �Ƚ��ϴ�.
}

void main()
{

   	#pragma region �Լ�

   		// �ϳ��� Ư���� ������ �۾��� �����ϱ�
   		// ���� ���������� ����� �ڵ��� �����Դϴ�.

   		//Function();

   		
        // �Լ��� ȣ��� �� �Լ��� ȣ��Ǵ� ���� ��������
        // �Ѿ�� �˴ϴ�.

#pragma region �Ű� ����
        // �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η� �����ϱ�
   	    // ���� ����ϴ� �����Դϴ�.

   		//printf("Add�Լ��� ��� : %d\n", Add(10, 20));
   		//printf("Minus�Լ��� ��� : %d\n", Minus(10, 20));
   		//
   		//// �Ű� ������ �Լ� ���ο����� ������ �̷������, �Լ���
   		//// ����Ǹ� �޸𸮿��� ������� Ư¡�� ������ �ֽ��ϴ�.

   		//printf("Multpl�Լ��� ��� : %d\n", Multple(5.75f,7.65));

   		

#pragma endregion

#pragma region �μ�
        // �Լ��� ȣ��� �� �Ű������� ������ ���޵Ǵ� ���Դϴ�.

        // A(10) <-> B(20)

        // �μ��� ��� �Լ��� �ִ� �Ű������� ���� ���� ������ ���ִ�
        // �μ��� ���� �����Ǹ�, ���� �����ϴ� �μ��� ���� ���޹޴�
        // �Ű������� �ڷ����� ���� ��ġ�ؾ� �մϴ�.

     
    
        int a = 1000;
        int b = 2000;
        int temp = 0;

        temp = b;
        b = a;
        a = temp;
       
        printf("a ������ �� : %d\n", a);
        printf("b ������ �� : %d\n", b);

#pragma endregion


#pragma endregion
   	}

