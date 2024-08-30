#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>


//内存中存的是整型的二进制补码，（十六进制表示）
//int main()
//{
//	int a = 20;
//	int b = -10;
//	int c = 0x11223544;
//	//float b = 10.0;
//	return 0;
//}
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int check_sys()
//{
//	int a = 1;
//	//char* p = (char*)&a;
//	return *((char*)&a);
//}
//
//int main()
//{
//
//	
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}

//int main()
//{
//	unsigned int i;//无符号数
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//
//}

//int main()
//{
//
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));//-1~-128,127~1,0构成一个闭合圈
//	Sleep(100);
//	return 0;
//
//}

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)//无符号char数值范围构成一个闭合圈0~255，+1后变0
//	{
//		printf("hello\n");
//	}
//	return 0;
//}

//int main()
//{
//	double a = 1E10;
//	printf("%lf", a);
//	return 0;
//}

int main()//整型和浮点型存放在内存，以及访问的方式有所不同，
//整型存放整型访问能得到，浮点存放，浮点访问能得到
{
	int n = 9;
	float *pFloat = (float*)&n;
	printf("n:%d\n", n);
	printf("n:%f\n", *pFloat);

	*pFloat = 9.0;
	printf("num:%d\n", n);
	printf("num1:%f\n", *pFloat);
	return 0;
}