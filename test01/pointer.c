#include <stdio.h>

//int main() {
//
//	int a = 10;	//a���ڴ��з���Ŀռ�4���ֽ�
//	printf("%p\n", &a);	//%pר��������ӡ��ַ��
//	int* pa = &a;	//pa������ŵ�ַ�ģ���C������pa����ָ�����
//	//*˵��pa��ָ�����
//	//int˵��paָ��Ķ�����int����
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
//	*pa = 20;	//*�����ò�����*pa����ͨ��pa��ĵ�ַ�ҵ�a
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
//	//ָ��Ĵ�С����Ե�λ���й�
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
	struct Stu s = { "����", 20, 88.5 };	//�ṹ��Ĵ����Լ���ʼ��
	printf("1: %s %d %lf\n", s.name, s.age, s.score);	//�ṹ�����.��Ա����

	struct Stu* ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3; %s %d %lf\n", ps->name, ps->age, ps->score);	//�ṹ��ָ��->��Ա����

	return 0;
}