#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>


//�ڴ��д�������͵Ķ����Ʋ��룬��ʮ�����Ʊ�ʾ��
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
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
//	}
//	return 0;
//}

//int main()
//{
//	unsigned int i;//�޷�����
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
//	printf("%d", strlen(a));//-1~-128,127~1,0����һ���պ�Ȧ
//	Sleep(100);
//	return 0;
//
//}

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)//�޷���char��ֵ��Χ����һ���պ�Ȧ0~255��+1���0
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

int main()//���ͺ͸����ʹ�����ڴ棬�Լ����ʵķ�ʽ������ͬ��
//���ʹ�����ͷ����ܵõ��������ţ���������ܵõ�
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