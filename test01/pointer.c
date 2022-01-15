#include <stdio.h>

//int main() {
//
//	int a = 10;	//a在内存中分配的空间4个字节
//	printf("%p\n", &a);	//%p专门用来打印地址的
//	int* pa = &a;	//pa用来存放地址的，在C语言中pa叫做指针变量
//	//*说明pa是指针变量
//	//int说明pa指向的对象是int类型
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}

//int main() {
//
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;	//*解引用操作，*pa就是通过pa里的地址找到a
//	printf("%d\n", a);
//
//	return 0;
//}

//int main() {
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//	//指针的大小与电脑的位数有关
//}

struct Stu {
	char name[20];
	int age;
	double score;
};

struct Book {
	char name[20];
	float price;
	char id[30];
};

int main() {
	struct Stu s = { "张三", 20, 88.5 };	//结构体的创建以及初始化
	printf("1: %s %d %lf\n", s.name, s.age, s.score);	//结构体变量.成员变量

	struct Stu* ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3; %s %d %lf\n", ps->name, ps->age, ps->score);	//结构体指针->成员变量

	return 0;
}