#include <stdio.h>

//int main() {
//	//数组的创建
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	char ch[5] = { 'a', 'b', 'c' };
//	int i = 0;
//	/*while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}*/
//	int a = 8;
//	//sizeof的使用
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	printf("%d\n", sizeof a);
//	return 0;
//}

//int main() {
//	//移位符的使用
//	int a = 2;
//	int b = a << 1;//左移
//	printf("%d\n", b);
//	return 0;
//}

//int main() {
//	int a = 0;
//	printf("%d\n", ~a);//~按位取反	把二进制中的数0变成1，1变成0
//	return 0;
//	/*
//	整数在内存中存储的是补码
//	一个整数的二进制表现有三种：源码、反码、补码
//	
//	-1 
//	10000000000000000000000000000001（源码）
//	11111111111111111111111111111110（反码）
//	11111111111111111111111111111111（补码）
//	
//	正数：源码、反码、补码相同
//	*/
//}

//int main() {
//	//int a = 10;
//	//int b = a++;	//先应用，后++
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//
//	int a = 10;
//	int b = ++a;	//先++，后应用
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

//int main() {
//
//	int a = (int)3.14;	//强制类型转换
//	printf("%d\n", a);
//	return 0;
//}

////逻辑运算符 0表示假，非0表示真
//int main() {
//	int a = 5;
//	int b = 0;
//	int c = a && b;
//	printf("%d\n", c);
//	int d = a || b;
//	printf("%d\n", d);
//  return 0;
//}

////条件运算符（三目运算符）
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
//	printf("%d\n", d);	//逗号运算符，从左往右依次计算，最后一个表达式的结果为整个表达式的结果
//	return 0;
//}

//int main() {
//	//大量频繁被使用的数据，放在寄存器中提升效率
//	register int num = 100;	//建议num的值放在寄存器中
//	return 0;
//}

//typedef unsigned int u_int;	//类型重命名
//int main() {
//	//unsigned int num = 100;
//	u_int num = 100;
//	return 0;
//}

//void test() {
//	static int a = 1;	//没有static结果是十个2
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
//static修饰局部变量，改变了局部变量的生命周期（本质上改变了变量的存储类型）
//栈区：局部变量、函数的参数
//堆区：动态内存分配的
//静态区：全局变量、static修饰的静态变量
//*/

//extern int val;	//声明外部变量
//int main() {
//	printf("%d\n", val);
//	return 0;
//}
///*
//static修饰全局变量，使得这个全局变量只能在自己所在的源文件(.c)内部使用，其他源文件不能使用
//全局变量在其他源文件内部可以被使用，是因为全局变量具有外部链接属性，但被static修饰后就变为了内部链接属性，其他源文件就不能链接到这个静态的全局变量了。
//*/

//extern int Add(int x, int y);
//int  main() {
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//}
///*
//static修饰函数，使函数只能在自身源文件内部使用，不能在其他源文件内部使用。
//本质上，static是将函数的外部链接属性变为了内部链接属性。（和static修饰全局变量一样）
//*/

//define定义常量
//#define Max 100
//int main() {
//
//	printf("%d\n", Max);
//	return 0;
//}

//define定义宏
//#define Add(X, Y) ((X) + (Y))
//int main() {
//	printf("%d\n", 4*Add(3, 5));
//	return 0;
//}

