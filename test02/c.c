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