/*
	本视频为 C 语言期末速成课, 故讲的很浅显且没有"为什么"
*/

//#include <stdio.h>
//#include <stdbool.h>

//int Add(int x, int y);

//int main()
//{
//	int x = 3;
//	if (x == 1)
//	{
//		printf("x == 1");
//	}
//	else if (x == 2)
//	{
//		printf("x == 2");
//	}
//	else if (x == 3)
//	{
//		printf("x == 3");
//	}
//	else
//	{
//		printf("...");
//	}
//
//	x = 2;
//	switch (x)
//	{
//	case 1 :
//		printf("x == 1");
//		break;
//	case 2:
//		printf("x == 2");
//		//break;
//	case 3 :
//		printf("x == 3");
//		break;
//	default:
//		printf("...");
//		break;
//	}
//
//	int i = 0;
//	for (int i = 0; i < 5; ++i)
//	{
//		printf("Hello World!");
//	}
//	int i = -1 ;
//	while (i >  0)
//	{
//		printf("Hello World!");
//	}
//	do {
//		printf("Hello World!");
//		++i;
//	} while (i > 0);
//
//	for (int i = 0; i < 5; ++i)
//	{
//		if (i == 2)
//		{
//			continue;
//		}
//		printf("Hello World!");
//	}
//
//	int res = Add(3, 5);
//	printf("%d", res);
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}

// 返回值 函数名(形参列表)
// {
// 	return ..;
// }
//  void A(int x ,int y)
// {
// }

//#include <stdio.h>
//
//int main()
//{
//	char grade[3] = { 0 };
//	for (int i = 0; i < 3; ++i)
//	{
//		printf("%d\n", grade[i]);   
//	int i = 0;
//	printf("%d\n", i++);
//	printf("%d\n", i);
//
//	int grade;
//	char grades[10][50] = { 0 };
//	for (int i = 0; i < 10; ++i)
//	{
//		for (int j = 0; i < 50; ++j)
//		{
//			printf("请输入成绩:\n");
//			scanf_s("%d", &grade);
//			grades[i][j] = grade;
//		}
//	}
//
//	int x = 0;
//	int* px = &x;
//	int** ppx = &px;
//	printf("%d, %p, %d, %p, %p\n", *px, px, **ppx, *ppx, ppx);
//
//	int x = 0;
//	x = 1;
//	const int y = 0;
//	//y = 1;
//	int* const px = &x;
//	//*px = 1;
//	//x = 1;
//	px = &y;
//
//	return 0;
//}

//enum e
//{
//	STUDENT = 1,
//	TEACHER = 2
//};
//
//struct Person
//{
//	char* name;
//	int age;
//	int tall;
//	enum e pe;
//};

//struct book
//{
//	int price;
//};
//struct fruit
//{
//	int price;
//};

//union u
//{
//	struct book b;
//	struct fruit f;
//};
//
//int main()
//{
//	struct Person p = { "zhangsan", 18, 185, 2 };
//
//	return 0;
//}

//#include <stdlib.h>
//
//struct Person
//{
//	char* name;
//	int age;
//	int tall;
//};
//
//int main()
//{
//	//struct Person p = { "zhangsan", 18, 185 };
//	//printf("%s, %d, %d\n", p.name, p.age, p.tall);
//
//	struct Person* p = (struct Person*)malloc(sizeof(struct Person));
//	p->name = "zhangsan";
//	p->age = 18;
//	p->tall = 185;
//	printf("%s, %d, %d\n", p->name, p->age, p->tall);
//  free(p);
//
//	int x = 5;
//	float f = 3.15;
//	x = f;
//
//
//	return 0;
//}

//int main()
//{
//	//FILE* f = fopen("test.txt", "w+");
//	//const char cw[] = "Hello World!";
//	//fwrite(cw, sizeof(cw), 1, f);
//	
//	FILE* f = fopen("test.txt", "r+");
//	char cr[1024];
//	size_t ret = fread(cr, 1, sizeof(cr) - 1, f);
//	if (ret)
//	{
//		cr[ret] = '0';
//		printf("%s", cr);
//	}
//
//	fclose(f);
//
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	char* pc = (char*)malloc(sizeof(char) * 20);
//	memset(pc, 0, sizeof(char) * 20);
//	printf("%s\n", pc);
//
//	char* ph = "hello world!";
//
//	memcpy(pc, ph, strlen(ph));
//	printf("%s\n", pc);
//
//	free(pc);
//
//	return 0;
//}

int main()
{
	int* p = (int*)calloc(10, sizeof(int));

	p = (int*)realloc(p, sizeof(int) * 20);

	free(p);

	return 0;
}