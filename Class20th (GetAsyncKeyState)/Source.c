#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define SIZE 10

void Shuffle(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int seed = rand() % size;

		int temporary = array[seed];

		array[seed] = array[i];

		array[i] = temporary;
	}
}

int main()
{
#pragma region ���� �Լ�

	//  srand(time(NULL));
	//  
	//  //  0   1   2   3   4   5   6   7   8   9
	//  // [1] [2] [3] [4] [5] [6] [7] [8] [9] [10]
	//  int list[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//  
	//  int size = sizeof(list) / sizeof(int);
	//  
	//  Shuffle(list, size);
	//  
	//  for (int i = 0; i < size; i++)
	//  {
	//  	printf("list[%d]�� �� : %d\n", i, list[i]);
	//  }

#pragma endregion

#pragma region ������ �迭
	//  const char * dialog[SIZE];
	//  
	//  dialog[0] = "�ȳ��ϼ���?";
	//  dialog[1] = "�����Ű���?";
	//  dialog[2] = "Ž���Դϴ�.";
	//  dialog[3] = "��, �ݰ����ϴ�.";
	//  dialog[4] = "���� ����� �־�����?";
	//  dialog[5] = "������ ������ ��������.";
	//  dialog[6] = "���� ���� ������� �ɱ��?";
	//  dialog[7] = "��������.";
	//  dialog[8] = "����� ���� �����帮�ڽ��ϴ�.";
	//  dialog[9] = "��, �˰ڽ��ϴ�.";
	//  
	//  // Ž��   [5] ���
	//  // �Ƿ��� [5] ���
	//  
	//  // �����̽�  
	//  
	//  int count = 0;
	//  
	//  while (count < SIZE)
	//  {
	//  	// 0x0000 : ������ ���� ���� ���� ȣ�� �������� �������� ���� ����
	//  	
	//  	// 0x0001 : ������ ���� ���� �ְ� ȣ�� �������� �������� ���� ����
	//  
	//  	// 0x8000 : ������ ���� ���� ���� ȣ�� �������� �����ִ� ����
	//  
	//  	// 0x8001 : ������ ���� ���� �ְ� ȣ�� �������� �����ִ� ����
	//  
	//  	//                     0x20    & 0x0001
	//  	if (GetAsyncKeyState(VK_SPACE) & 0x0001)
	//  	{
	//  		if (count % 2 == 0)
	//  		{
	//  			printf("Ž��: %s\n", dialog[count]);
	//  		}
	//  		else
	//  		{
	//  			printf("�Ƿ���: %s\n", dialog[count]);
	//  		}
	//  
	//  		count++;
	//  	}
	//  }
	//  
	//  Sleep(2000);
	//  
	//  printf("\n��ȭ�� ����Ǿ����ϴ�.\n");

#pragma endregion

	return 0;
}