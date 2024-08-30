#include <stdio.h>
#include <stdlib.h>

struct GameObject
{
	char grade;
	int x;
	double scale;

	// ����ü ũ���� ��� ��� ������ ������ ���� �޸���
	// ũ�Ⱑ �ٸ��� ������ �� ������, ����ü ũ�⸦ �����ϴ�
	// ���´� �⺻ �ڷ������θ� �����˴ϴ�.
};

struct Node
{
	int data;
	struct Node * next;
};

inline void OnCollisionEnter()
{
	printf("Collision\n");
}

int main()
{
#pragma region ����Ʈ �е�
	// ��� ������ �޸𸮿��� CPU�� ���� �� �� ����
	// ���� �� �ֵ���, �����Ϸ��� ���������� ��Ͽ�
	// ���߾� ����Ʈ�� �е����ִ� ����ȭ �۾��Դϴ�.

	// struct GameObject gameObject;
	// 
	// printf("GameObject�� ũ�� : %d\n", sizeof(gameObject));

	// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿��� ũ�Ⱑ
	// ���� ū �ڷ����� ����� �ǵ��� �����մϴ�.

#pragma endregion

#pragma region �ζ��� �Լ�
	// �Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ����
	// �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ��Դϴ�.

	// OnCollisionEnter();

	// �ζ��� �Լ��� �Լ��� ȣ���ϴ� ������ �����Ƿ� ó��
	// �ӵ��� ��������, �ζ��� �Լ��� ���� ����ϰ� �Ǹ�
	// �Լ��� �ڵ尡 ����Ǳ� ������ ���� ������ ũ�Ⱑ Ŀ���� �˴ϴ�.
#pragma endregion

#pragma region ����ü ������

	// struct Node * node = malloc(sizeof(struct Node));
	// 
	// node->data = 100;
	// 
	// printf("node1�� data �� : %d\n", node->data);
	// 
	// free(node);

#pragma endregion

#pragma region �ڱ� ���� ����ü

	struct Node node1 = { 10, NULL };
	struct Node node2 = { 20, NULL };
	struct Node node3 = {30, NULL};
	struct Node * currentNode[3] = { &node1, &node2, &node3};

	node1.next = &node2;
	node2.next = &node3;
	node3.next = NULL;

	for (int i = 0; i < 3; i++)
	{
		    printf("node%d.data = %d\n", i + 1, currentNode[i + 1]->data);
		    currentNode[i + 1]->next = &currentNode[i + 2]->next;
	}

#pragma endregion



	return 0;
}
