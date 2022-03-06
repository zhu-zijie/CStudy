#include <stdio.h>
#include <math.h>

//int is_sushu(int i)
//{
//	for (int j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int count = 0;
//	for (int n = 100; n <= 200; n++)
//	{
//		int num = is_sushu(n);
//		if (num == 1)
//		{
//			printf("%d ", n);
//			count++;
//		}
//	}
//	printf("\n100-200素数总共有%d个\n", count);
//	return 0;
//}

//int is_leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\n1000-2000的闰年一共有%d个\n", count);
//	return 0;
//}

//二分查找
//int binary_search(int arr[], int key, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, key, sz);//arr传过去的是首元素地址
//	if (ret == -1)
//	{
//		printf("找不到！");
//	}
//	else
//	{
//		printf("查找的下标为%d\n", ret);
//	}
//	return 0;
//}

//void Add(int *p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//#include "add.h"
//#include "sub.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("a+b=%d\n", c);
//	int d = Sub(a, b);
//	printf("a-b=%d\n", d);
//	return 0;
//}