#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
// {
//	int age = 60;
//	if (age <= 18)
//		printf("����\n");
//	else if (18 <= age <= 26)	//18 <= age�Ľ��Ϊ�棨1����1<26������
//		printf("����\n");
//	else
//		printf("����\n");
//	return 0;
//}

//forѭ�����
//int main()
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

//switchѭ�����
//int main()
//{
//
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
	//��whileѭ���У�break�������õ���ֹѭ��
	//��whileѭ���У�continue��������continue����Ĵ��룬ֱ��ȥ�жϲ��֣��Ƿ������һ�ε�ѭ����

	//while (i <= 10)
	//{
	//	if (i == 5)
	//		break;
	//	printf("%d ", i);
	//	i++;
	//}

	//while (i <= 10)
	//{
	//	if (i == 5)
	//		continue;
	//	printf("%d ", i);
	//	i++;
	//}
	//return 0;
//}

//getchar
//EOF - end of file - �ļ�������־

//int main()
//{
//	int ch = getchar();	//��ȡһ���ַ�
//	//printf("%c\n", ch);
//	putchar(ch);	//���һ���ַ�
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//ctrl + z	getchar()��ȡ����
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);
//	printf("��ȷ������(Y/N��>");
//	//��������
//	//getchar();	//����'\n'
//
//	//������������ַ�
//	int tmp = 0;
//	while (tmp = getchar() != '\n')
//	{
//		;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ���");
//	}
//	else
//	{
//		printf("ȷ��ʧ�ܣ�");
//	}
//	//putchar(ch);
//	return 0;
//}

//����
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}

//forѭ��
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++)	//��Ҫ�������ѭ������
//		{
//			printf("������");
//		}
//	}
//	return 0;
//}

//do whileѭ��
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//����n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * (i + 1);
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

//����0!+...+10!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	int ret = 1;
//	for (n = 0; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 0; i < n; i++)
//		{
//			ret = ret * (i + 1);
//		}
//		sum += ret;
//	}

	//1!+...=10!
	//for (i = 0; i < 10; i++)
	//{
	//	ret *= (i + 1);
	//	sum += ret;
	//}

//	printf("%d\n", sum);
//	return 0;
//}

//���ֲ���/�۰����
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 47;	//Ҫ���ҵ�����
//	int left = 0;	//���±�
//	int sz = sizeof(arr) / sizeof(arr[0]);	//����Ԫ�صĸ���
//	int right = sz - 1;	//���±�
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����");
//	}
//
//	return 0;
//}

//����
//#include <string.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = "wlecome to bit!!!!!!!!!!!";
//	char arr2[] = "#########################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);	//˯��1s
//		system("cls");	//�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	int i = 0;	//��������Ϊ123456
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("������ȷ��");
//			break;
//		}
//		else
//		{
//			printf("����������ٴ����룡\n");
//		}
//	}
//
//	if (i == 3)
//	{
//		printf("���λ���ʹ����ϣ��˳���¼��\n");
//
//		return 0;
//	}
//}


//#include <time.h>
//#include <stdlib.h>
//void menu()
//{
//	//��ӡ�˵�
//	printf("********************************************\n");
//	printf("***********  ��ʼ��Ϸ��ѡ��1��  ************\n");
//	printf("***********  �˳���Ϸ��ѡ��0��  ************\n");
//	printf("********************************************\n");
//}
//
//void game()
//{
//	//������
//	int ret = rand() % 100 + 1;	//�����1-100
//	//printf("%d\n", ret);
//	int guess = 0;
//
//	while (1)
//	{
//		printf("��������µ����֣�");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));	//ʱ���
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			//printf("����Ϸ��\n");
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ��\n");
//			break;
//		default:
//			printf("���������룡\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}



