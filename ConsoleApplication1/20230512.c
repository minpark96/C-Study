#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#pragma region 1
/*int main(void)
{
	char temp[80];
	char* str[3] = { 0 };
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("���ڿ��� �Է��ϼ��� : ");
		gets(temp);
		if (str[i] != NULL)
		{
			free(str[i]);
		}

		str[i] = (char*)malloc(strlen(temp) + 1);
		if (str[i] == NULL)
		{
			exit(1);
		}
		strcpy(str[i], temp);
	}

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);
	}

	for (i = 0; i < 3; i++)
	{
		free(str[i]);
	}

	return 0;




}*/
#pragma endregion

#pragma region 2
//void print_str(char** ps);
//
//int main(void)
//{
//	char temp[80];
//	char* str[21] = { 0 };
//	int i = 0;
//	while (i < 20)
//	{
//		printf("���ڿ��� �Է��ϼ��� : ");
//		gets(temp);
//		if (strcmp(temp, "end") == 0) break;
//		str[i] = (char*)malloc(strlen(temp) + 1);
//		strcpy(str[i], temp);
//		i++;
//	}
//	print_str(str);
//
//	for (i = 0; str[i] != NULL; i++)
//	{
//		free(str[i]);
//	}
//
//	return 0;
//}
//
//void print_str(char** ps)
//{
//	while (*ps != NULL)
//	{
//		printf("%s\n", *ps);
//		ps++;
//	}
//}
#pragma endregion

#pragma region 3
//int main(int argc, char** argv) 
//{
//	int i;
//
//	for (i = 0; i < argc; i++)
//	{
//		printf("%s\n", argv[i]);
//	}
//
//	return 0;
//}
#pragma endregion

#pragma region �Ҽ� ��� ���α׷�
//void FillArray(int* aryNum, int inputNum);
//int IsPrime(int i);
//void PrintNum(int* aryNum, int idx, const int MAX_COL);
//
//int main()
//{
//	int inputNum = 3;
//	int* ptrAry = { 0 };
//	const int MAX_COL = 5;
//
//	while (inputNum > 2)
//	{
//		printf("> ��� �Է�(2���� ���� �Է½� ����) : ");
//		scanf("%d", &inputNum);
//
//		if (ptrAry != NULL)
//		{
//			free(ptrAry);
//		}
//		
//		ptrAry = (int*)malloc((inputNum - 2) * sizeof(int));
//		
//		if (ptrAry == NULL)
//		{
//			printf("�����մϴ�!\n");
//			exit(1);
//		}
//
//		if (inputNum > 2)
//		{
//			FillArray(ptrAry, inputNum);
//			PrintNum(ptrAry, inputNum, MAX_COL);
//		}
//	}
//	
//	printf("�����մϴ�!\n");
//	free(ptrAry);
//
//	return 0;
//}
//
//void FillArray(int* ptrAry, int inputNum)
//{
//	for (int i = 2, idx = 0; i < inputNum; i++, idx++)
//	{
//		if (IsPrime(i))
//			ptrAry[idx] = i;
//		else
//			ptrAry[idx] = 0;
//	}
//}
//
//int IsPrime(int i)
//{
//	for (int j = 2; j < i; j++)
//	{
//		if (i % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//void PrintNum(int* ptrAry, int inputNum, const int MAX_COL)
//{
//	for (int idx = 0; idx < inputNum - 2; idx++)
//	{
//		if ((idx != 0) && (idx % MAX_COL == 0))
//			printf("\n");
//
//		if (ptrAry[idx] == 0)
//			printf("%5c", 'X');
//		else
//			printf("%5d", ptrAry[idx]);
//	}
//	printf("\n");
//}
#pragma endregion

#pragma region 4
//struct profile
//{
//	int age;
//	double height;
//};
//
//struct student 
//{
//	struct profile pf;
//	int id;
//	double grade;
//};
//
//int main(void)
//{
//	struct student yuni;
//
//	yuni.pf.age = 17;
//	yuni.pf.height = 164.5;
//	yuni.id = 315;
//	yuni.grade = 4.3;
//
//	printf("���� : %d\n", yuni.pf.age);
//	printf("Ű : %.1lf\n", yuni.pf.height);
//	printf("�й� : %d\n", yuni.id);
//	printf("���� : %.1lf\n", yuni.grade);
//
//	return 0;
//}
#pragma endregion

#pragma region 5
//struct address
//{
//	char name[20];
//	int age;
//	char tel[20];
//	char addr[80];
//};
//
//int main(void)
//{
//	struct address list[5];
//	int i;
//
//	for (i = 0; i < 1; i++)
//	{
//		printf("%d��° �ι�\n", i + 1);
//		printf("�̸��� �Է��ϼ��� : ");
//		fgets(list[i].name, 20, stdin);
//		rewind(stdin);
//		printf("���̸� �Է��ϼ��� : ");
//		scanf("%d", &list[i].age);
//		rewind(stdin);
//		printf("��ȭ��ȣ�� �Է��ϼ��� : ");
//		fgets(list[i].tel, 20, stdin);
//		rewind(stdin);
//		printf("�ּҸ� �Է��ϼ��� : ");
//		fgets(list[i].addr, 20, stdin);
//		rewind(stdin);
//			
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%10s%5d%15s%20s\n",
//			list[i].name, list[i].age, list[i].tel, list[i].addr);
//	}
//
//	return 0;
//}
#pragma endregion

#pragma region 6
//struct list
//{
//	int num;
//	struct list* next;
//};
//
//int main()
//{
//	struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
//	struct list* head = &a, * current;
//
//	a.next = &b;
//	b.next = &c;
//
//	printf("head->num : %d\n", head->num);
//	printf("head->next->num : %d\n", head->next->num);
//
//	printf("list all : ");
//	current = head;
//	while (current != NULL)
//	{
//		printf("%d  ", current->num);
//		current = current->next;
//	}
//	printf("\n");
//
//	return 0;
//}
#pragma endregion

#pragma region 7
//enum season {SPRING, SUMMER, FALL, WINTER};
//
//int main(void)
//{
//	enum season ss;
//	char* pc = NULL;
//
//	ss = SPRING;
//	switch (ss)
//	{
//	case SPRING:
//		pc = "inline"; break;
//	case SUMMER:
//		pc = "swimming"; break;
//	case FALL:
//		pc = "trip"; break;
//	case WINTER:
//		pc = "skiing"; break;
//	}
//	printf("���� ���� Ȱ�� => %s\n", pc);
//
//	return 0;
//}
#pragma endregion

// CreateConsoleScreenBuffer WinAPI ���� ���۸�
// GetAsyncKeyState Ű�Է� Ȱ��
// SetConsoleTextAttribute Ŀ�� ���� ����

#pragma region ���� ó�� ���α׷�



typedef struct Node
{
	int num;
	int scoreKor;
	int scoreEng;
	int scoreMat;
	int scoreTot;
	double scoreAvg;
	char grade;
	char name[32];
	struct Node* next;
} Node;

void Insert(Node* head);
void Print(Node* head);
void Search(Node* head);
void End(Node* head);

int main()
{
	int select;
	Node* head = (Node*)malloc(sizeof(Node));
	if (head == NULL)
	{
		printf("�޸� �Ҵ� ����!\n");
		exit(1);
	}
	head->next = NULL;

	while (1)
	{
		printf("1. �Է�\n");
		printf("2. ���\n");
		printf("3. �˻�\n");
		printf("4. ����\n");
		scanf("%d%*c", &select);
		switch (select)
		{
		case 1:
			Insert(head);
			break;
		case 2:
			Print(head);
			break;
		case 3:
			Search(head);
			break;
		case 4:
			End(head);
			return 0;
		}
	}

	return 0;
}

void Insert(Node* head)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	Node* curr;
	const int NUM_SUB = 3;
	int isDuplicated = 1;

	if (newNode == NULL)
	{
		printf("�޸� �Ҵ� ����!\n");
		exit(1);
	}

	while (isDuplicated)
	{
		isDuplicated = 0;
		curr = head;
		printf("�й� : "); // �ߺ� üũ �ݺ��� �ȿ� �־���ҵ�
		scanf("%d%*c", &newNode->num);
		while (curr->next != NULL)
		{
			if (curr->next->num == newNode->num)
			{
				printf("�ߺ��� �й��Դϴ�!\n");
				isDuplicated = 1;
				break;
			}
			isDuplicated = 0;
			curr = curr->next;
		}
	}
	
	printf("�̸� : ");
	gets(newNode->name);
	printf("����, ����, ���� ���� : ");
	scanf("%d%d%d%*c", &newNode->scoreKor, &newNode->scoreEng, &newNode->scoreMat);
	// 100�� �ʰ�, 0�� �̸� ����ó�� �ؾ� ��

	newNode->scoreTot = newNode->scoreKor + newNode->scoreEng + newNode->scoreMat;
	newNode->scoreAvg = (double)newNode->scoreTot / (double)NUM_SUB;
	
	if (newNode->scoreAvg < 70)
	{
		node->grade = 'F';
	}
	else if (newNode->scoreAvg < 80)
	{
		newNode->grade = 'C';
	}
	else if (newNode->scoreAvg < 90)
	{
		newNode->grade = 'B';
	}
	else
	{
		newNode->grade = 'A';
	}

	if (head->next == NULL) // ù ����� ��
	{
		head->next = newNode;
		newNode->next = NULL;
	}
	else // �� ���� �߰�
	{
		Sort();
		/*curr = head->next;
		while (curr->next != NULL) 
		{
			curr = curr->next;
		}
		curr->next = newNode;
		newNode->next = NULL;*/
	}


}

void Print(Node* head)
{
	if (head->next == NULL)
	{
		printf("�Էµ� �����Ͱ� �����ϴ�!\n");
		return;
	}
	else
	{
		Node* curr = head->next;
		while (curr != NULL)
		{// ���� �̱���
			printf("%4d  %5s  %3d  %3d  %3d  %3d  %.1lf   %c\n",
				curr->num, curr->name, curr->scoreKor, curr->scoreEng, curr->scoreMat,
				curr->scoreTot, curr->scoreAvg, curr->grade);
			curr = curr->next;
		}
	}
}

void Search(Node* head)
{
	if (head->next == NULL)
	{
		printf("�Էµ� �����Ͱ� �����ϴ�!\n");
		return;
	}
	else
	{
		char targetName[32] = { 0 };
		int isSuccess = 0;
		printf("�˻��Ϸ��� �̸� : ");
		gets(targetName);
		Node* curr = head->next;
		while (curr != NULL)
		{
			if (!strcmp(targetName, curr->name))
			{
				printf("%4d  %5s  %3d  %3d  %3d  %3d  %.1lf   %c\n",
					curr->num, curr->name, curr->scoreKor, curr->scoreEng, curr->scoreMat,
					curr->scoreTot, curr->scoreAvg, curr->grade);
				isSuccess = 1;
				return;
			}
			curr = curr->next;
		}
		if (!isSuccess)
		{
			printf("ã������ �̸��� �л��� �������� �ʽ��ϴ�!\n");
		}
	}
}

void End(Node* head)
{
	printf("���α׷��� �����մϴ�!\n");
	Node* curr;
	Node* temp;
	curr = head;

	if (head->next == NULL)
	{
		free(head);
	}
	else
	{
		while (curr->next != NULL)
		{
			temp = curr;
			curr = curr->next;
			free(temp);
		}
		free(curr);
	}
}

void Sort(Node* head, Node* newNode)
{
	Node* curr, max;
	curr = head->next;
	max = head->next

	while (curr->next != NULL)
	{
		if (curr->scoreAvg > )
		{

		}
	}

}


#pragma endregion
