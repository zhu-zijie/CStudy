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
//	//����������
//	//getchar();	//����'\n'
//
//	//��������������ַ�
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
