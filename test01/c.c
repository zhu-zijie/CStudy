#include <stdio.h>

//int main() {
//	//����Ĵ���
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	char ch[5] = { 'a', 'b', 'c' };
//	int i = 0;
//	/*while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}*/
//	int a = 8;
//	//sizeof��ʹ��
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	printf("%d\n", sizeof a);
//	return 0;
//}

//int main() {
//	//��λ����ʹ��
//	int a = 2;
//	int b = a << 1;//����
//	printf("%d\n", b);
//	return 0;
//}

//int main() {
//	int a = 0;
//	printf("%d\n", ~a);//~��λȡ��	�Ѷ������е���0���1��1���0
//	return 0;
//	/*
//	�������ڴ��д洢���ǲ���
//	һ�������Ķ����Ʊ��������֣�Դ�롢���롢����
//	
//	-1 
//	10000000000000000000000000000001��Դ�룩
//	11111111111111111111111111111110�����룩
//	11111111111111111111111111111111�����룩
//	
//	������Դ�롢���롢������ͬ
//	*/
//}

//int main() {
//	//int a = 10;
//	//int b = a++;	//��Ӧ�ã���++
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//
//	int a = 10;
//	int b = ++a;	//��++����Ӧ��
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

//int main() {
//
//	int a = (int)3.14;	//ǿ������ת��
//	printf("%d\n", a);
//	return 0;
//}

////�߼������ 0��ʾ�٣���0��ʾ��
//int main() {
//	int a = 5;
//	int b = 0;
//	int c = a && b;
//	printf("%d\n", c);
//	int d = a || b;
//	printf("%d\n", d);
//  return 0;
//}

////�������������Ŀ�������
//int main() {
//	int a = 5;
//	int b = 3;
//	int max = 0;
//	/*if (a > b)
//	{
//		max = a;
//	}
//	else {
//		max = b;
//	}*/
//	max = a > b ? a : b;
//	printf("%d\n", max);
//
//	return 0;
//}

//int main() {
//	int a = 1;
//	int b = 3;
//	int c = 5;
//	int d = (b = a + 7, c = b - 4, a = c + 2);
//	printf("%d\n", d);	//����������������������μ��㣬���һ�����ʽ�Ľ��Ϊ�������ʽ�Ľ��
//	return 0;
//}

//int main() {
//	//����Ƶ����ʹ�õ����ݣ����ڼĴ���������Ч��
//	register int num = 100;	//����num��ֵ���ڼĴ�����
//	return 0;
//}

//typedef unsigned int u_int;	//����������
//int main() {
//	//unsigned int num = 100;
//	u_int num = 100;
//	return 0;
//}

//void test() {
//	static int a = 1;	//û��static�����ʮ��2
//	a++;
//	printf("%d\n", a);
//}
//
//int main() {
//
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
///*
//static���ξֲ��������ı��˾ֲ��������������ڣ������ϸı��˱����Ĵ洢���ͣ�
//ջ�����ֲ������������Ĳ���
//��������̬�ڴ�����
//��̬����ȫ�ֱ�����static���εľ�̬����
//*/

//extern int val;	//�����ⲿ����
//int main() {
//	printf("%d\n", val);
//	return 0;
//}
///*
//static����ȫ�ֱ�����ʹ�����ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ�(.c)�ڲ�ʹ�ã�����Դ�ļ�����ʹ��
//ȫ�ֱ���������Դ�ļ��ڲ����Ա�ʹ�ã�����Ϊȫ�ֱ��������ⲿ�������ԣ�����static���κ�ͱ�Ϊ���ڲ��������ԣ�����Դ�ļ��Ͳ������ӵ������̬��ȫ�ֱ����ˡ�
//*/

//extern int Add(int x, int y);
//int  main() {
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//}
///*
//static���κ�����ʹ����ֻ��������Դ�ļ��ڲ�ʹ�ã�����������Դ�ļ��ڲ�ʹ�á�
//�����ϣ�static�ǽ��������ⲿ�������Ա�Ϊ���ڲ��������ԡ�����static����ȫ�ֱ���һ����
//*/

//define���峣��
//#define Max 100
//int main() {
//
//	printf("%d\n", Max);
//	return 0;
//}

//define�����
//#define Add(X, Y) ((X) + (Y))
//int main() {
//	printf("%d\n", 4*Add(3, 5));
//	return 0;
//}

