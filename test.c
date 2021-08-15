#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	///*const int a = 12;
//	//int arr[10 + 1] = { 0 };
//	//char acc[12] = { 'a',97 };
//	//char arr1[4] = "asdsd";
//	//int se = sizeof(arr1) / sizeof(arr1[0]);
//	//printf("%d\n",se);*/
//	return 0;
////}
//void add(int* p)//因为传的是地址
//{
//	//*p++;错误写法，因为++的优先级比*高，他会先把p加加，而不是把地址加加
//	(*p)++;
//}
//int main()
//{
//	//写一个函数，每次调用一次这个函数，就会将num的值增加1
//	int num = 0;
//	add(&num);
//	printf("num=%d\n",num);
//	add(&num);
//	printf("num=%d\n", num);
//	add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}
//函数的嵌套使用
//void new_line()
//{ 
//	printf("hehe\n"); 
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}
////链式访问
//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n",len);
//	printf("%d\n",strlen("abc"));
//	return 0; 
//}
////printf函数的返回值是打印在屏幕上字符的个数
//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));
//}
//函数递归
//最简单的函数递归
//程序最后会崩溃，因为递归调用的栈溢出了
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//练习一：接受一个整型值，按照顺序打印它的每一位，例如输入1234，输出1234。
//思路1234%10——得到了4
//123%10——得到了3
//12%10——得到了2
//1%10——得到了1
//大事化小思想
//递归
//void print(int n)
//{ 
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d\n",n%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d",&num);
//	print(num);
//	/*if (n > a)
//	{
//		print(n%10);
//	}
//	printf("%d\n",n%10);*/
//	return 0;
//}
//练习二：编写函数不允许创建临时变量，求字符串长度
//函数一：创建临时变量
//int my_strlen(char* str)//为什么是char*，因为数组传参是传的首字母元素的地址
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//递归的方法
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);//str+1是为了地址向后走
	else
		return 0;
}
int main()
{
	char arr[] = "bit";
	char arr1[] = { 0 };
	scanf("%c",arr1);
	//int len = my_strlen(arr);
	int len = my_strlen(arr1);
	printf("len=%d\n",len);
	printf("arr1=%d\n", arr1);

	return 0;
}