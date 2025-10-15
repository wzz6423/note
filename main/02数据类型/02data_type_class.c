// 1. 所有标点符号都是英文符号
//#include <stdio.h>
//
//int main() {
//	printf("Hello World\n");
//	return 0;
//}

//井include 《stdio。h》
//int mian（）；

///////////////////////////////////////////////////////////////////////////////////////////
//#include <stdio.h>
//
//int add(int a, int b);
//
//int main() {
//	//int a = 0;
//	printf("%d\n", 1);
//	//scanf("%d", &a);
//
//	return 0;
//}
//
//int add(int a, int b) {
//	return a + b;
//}

///////////////////////////////////////////////////////////////////////////////////////////
//#include <stdio.h>
//#include "add.h"
//
//int main() {
//	printf("%d\n", add(1, 2));
//
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////
//#include <stdio.h>
//
//int main() {
//	//printf("%c\n", 0);
//	//printf("%c\n", 1);
//	//printf("%c\n", 31);
//	//printf("%c\n", 48);	
//	printf("%c", 0);
//	printf("%c", 1);
//	printf("%c", 31);
//	printf("%c\n", 48);
//
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////
//#include <stdio.h>
//int main() {
//	printf("%c\n", 'W');
//	printf("%c\n", 87);
//	printf("%d\n", 87);
//
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	for (int i = 32; i <= 127; ++i) {
//		printf("%c ", i);
//	} 
//	printf("\n");
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////
//#include <stdio.h>
//int main() {
//	printf("Hello World\n");
//	printf("%s\n", "Hello World");
//
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	printf("Hello World\n");
//	printf("Hello \0World\n");
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////
//#include <stdio.h>
//
//int main() {
//	char arr1[] = { 'a','b','c' };
//	char arr2[] = "abc";
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	char arr1[] = { 'a','b','c','\0' };
//	char arr2[] = "abc";
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////
//#include <stdio.h>
//int main() {
//	printf("abcnnnnnefg\n");
//	printf("\n\n");
//	printf("abc\nnnn\nefg\n");
//	printf("\n\n");
//	printf("abc00efg\n");
//	printf("abc0\0efg\n");
//	printf("\n\n");
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	printf("D:\\Test\\Test.c\n");
//	printf("\a");
//	printf("%c\n", '\130'); // 130是八进制 -->十进制： 10 --> ASCII： X
//	printf("%c\n", '\x30'); // x30是十六进制--> 十进制： 48 --> ASCII： 0
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////
//#include <stdio.h>
//
//int main()
//{
//	//int num = printf("Hello\n");
//	//printf("%d\n", num);
//
//	3 + 5;
//
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////
//int main() 
//{
//	int x = 0;
//	for (;;);
//
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////
//#include  <stdbool.h>
//#include <stdio.h>
//
//#define abc 10
//
//int main() 
//{
//	printf("%d\n", true);
//	printf("%d\n", false);
//	printf("%d\n", abc);
//	size_t x = 0;
//
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////
//#include <stdio.h>

//int main() {
//	printf("sizeof char : %zd\n", sizeof(char));
//	printf("sizeof _Bool : %zd\n", sizeof(_Bool));
//	printf("sizeof short : %zd\n", sizeof(short));
//	printf("sizeof int : %zd\n", sizeof(int));
//	printf("sizeof long : %zd\n", sizeof(long));
//	printf("sizeof long long : %zd\n", sizeof(long long));
//	printf("sizeof float : %zd\n", sizeof(float));
//	printf("sizeof double : %zd\n", sizeof(double));
//	printf("sizeof long double : %zd\n", sizeof(long double));
//	return 0;
//}

//int main() {
//	short a = 1;
//	int b = 2;
//	printf("sizeof ( a + b) : %zd, a = %d\n", sizeof(a = a + b), a);
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////
//#include <stdio.h>
//int main() {
//	int a = 3;
//	int b = 2;
//	printf("%d\n", a / b); // 1
//	printf("%f\n", (float)a / b); // 1.500000
//	printf("%f\n", a / (float)b); // 1.500000
//	printf("%f\n", (float)(a / b)); // 1.000000
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////
//int main()
//{
//	void x;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("sizeof(void) = %zd\n", sizeof(void));
//	return 0;
//}