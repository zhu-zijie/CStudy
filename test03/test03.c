#include <stdio.h>

//int get_Max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_Max(a, b);
//	printf("�ϴ�ֵΪ%d\n", max);
//	return 0;
//}

//������������û�н����ɹ���
//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}

void Swap(int* pa, int* pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("����ǰ��a=%d b=%d\n", a, b);
	Swap(&a, &b);
	printf("������a=%d b=%d\n", a, b);
	return 0;
}