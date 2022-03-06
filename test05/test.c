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

int my_strlen(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "acb";
	//'a', 'b', 'c', '\0'
	int num = my_strlen(arr);
	printf("%d", num);
	return 0;
}