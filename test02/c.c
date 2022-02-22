#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
// {
//	int age = 60;
//	if (age <= 18)
//		printf("少年\n");
//	else if (18 <= age <= 26)	//18 <= age的结果为真（1），1<26成立。
//		printf("青年\n");
//	else
//		printf("中年\n");
//	return 0;
//}

//for循环语句
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

//switch循环语句
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
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误！");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
	//在while循环中，break用于永久的终止循环
	//在while循环中，continue作用跳过continue后面的代码，直接去判断部分，是否进行下一次的循环。

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
//EOF - end of file - 文件结束标志

//int main()
//{
//	int ch = getchar();	//获取一个字符
//	//printf("%c\n", ch);
//	putchar(ch);	//输出一个字符
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//ctrl + z	getchar()读取结束
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);
//	printf("请确认密码(Y/N：>");
//	//清理缓冲区
//	//getchar();	//处理'\n'
//
//	//清理缓冲区多个字符
//	int tmp = 0;
//	while (tmp = getchar() != '\n')
//	{
//		;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功！");
//	}
//	else
//	{
//		printf("确认失败！");
//	}
//	//putchar(ch);
//	return 0;
//}

//玩玩
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

//for循环
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++)	//不要随便舍弃循环条件
//		{
//			printf("哈哈！");
//		}
//	}
//	return 0;
//}

//do while循环
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

//计算n的阶乘
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

//计算0!+...+10!
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

//二分查找/折半查找
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 47;	//要查找的数字
//	int left = 0;	//左下标
//	int sz = sizeof(arr) / sizeof(arr[0]);	//数组元素的个数
//	int right = sz - 1;	//右下标
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
//			printf("找到了，下标为%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到！");
//	}
//
//	return 0;
//}

//玩玩
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
//		Sleep(1000);	//睡眠1s
//		system("cls");	//清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	int i = 0;	//假设密码为123456
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("密码正确！");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请再次输入！\n");
//		}
//	}
//
//	if (i == 3)
//	{
//		printf("三次机会使用完毕，退出登录！\n");
//
//		return 0;
//	}
//}


//#include <time.h>
//#include <stdlib.h>
//void menu()
//{
//	//打印菜单
//	printf("********************************************\n");
//	printf("***********  开始游戏，选择1。  ************\n");
//	printf("***********  退出游戏，选择0。  ************\n");
//	printf("********************************************\n");
//}
//
//void game()
//{
//	//猜数字
//	int ret = rand() % 100 + 1;	//随机数1-100
//	//printf("%d\n", ret);
//	int guess = 0;
//
//	while (1)
//	{
//		printf("请输入你猜的数字：");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));	//时间戳
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			//printf("玩游戏！\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏！\n");
//			break;
//		default:
//			printf("请重新输入！\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//求两个数的最大公约数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int max = m > n ? n : m;
//
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公约数是%d", max);
//			break;
//		}
//		max--;
//	}
//
//	return 0;
//}

//辗转相除法
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int t = 0;
//	while (m % n)
//	{
//		t = m % n;
//		m = n;
//		n = t;
//	}
//	printf("最大公约数为%d", n);
//	return 0;
//
//}

//打印1000-2000之间的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

//#include <math.h>
////打印100-200以内的素数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int flag = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		flag = 1;//假设为素数
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 180");//60s后关机
//again:
//	printf("你的电脑将在60s内关机，请输入我很帅取消关机！\n");
//	scanf("%s", input);
//	if (strcmp(input, "我很帅") == 0)
//	{
//		system("shutdown -a");//取消关机
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char str1[20] = { 0 };
//	char str2[] = "i and you!";
//	strcpy(str1, str2);
//	printf("%s", str1);
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char str[] = "i am you!";
//	memset(str, 'x', 5);
//	printf("%s", str);
//	return 0;
//}