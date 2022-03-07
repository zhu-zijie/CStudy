#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%u ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "acb";
//	//'a', 'b', 'c', '\0'
//	int num = my_strlen(arr);
//	printf("%d", num);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	printf("%d", my_strlen(arr));
//	return 0;
//}

//求阶乘
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d", ret);
//	return 0;
//}

//int Factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Factorial(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 0;
//	ret = Factorial(n);
//	printf("%d", ret);
//	return 0;
//}

//计算斐波那契数列
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}

//改进版
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}

//汉诺塔
//int Han(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return 2 * Han(n - 1) + 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Han(n);
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = 0;
//	int ret = 0;
//	do
//	{
//		ret = 2 * a + 1;
//		a = ret;
//		n--;
//	} while (n >= 1);
//	
//	printf("%d", ret);
//	return 0;
//}

//青蛙跳台阶
//int Jump(int n)
//{
//	if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 2;
//	else
//		return Jump(n - 1) + Jump(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Jump(n);
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 0;
//	int a = 1;
//	int b = 2;
//	while (n > 2)
//	{
//		ret = a + b;
//		a = b;
//		b = ret;
//		n--;
//	}
//	printf("%d", ret);
//	return 0;
//}