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
//void add(int* p)//��Ϊ�����ǵ�ַ
//{
//	//*p++;����д������Ϊ++�����ȼ���*�ߣ������Ȱ�p�Ӽӣ������ǰѵ�ַ�Ӽ�
//	(*p)++;
//}
//int main()
//{
//	//дһ��������ÿ�ε���һ������������ͻὫnum��ֵ����1
//	int num = 0;
//	add(&num);
//	printf("num=%d\n",num);
//	add(&num);
//	printf("num=%d\n", num);
//	add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}
//������Ƕ��ʹ��
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
////��ʽ����
//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n",len);
//	printf("%d\n",strlen("abc"));
//	return 0; 
//}
////printf�����ķ���ֵ�Ǵ�ӡ����Ļ���ַ��ĸ���
//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));
//}
//�����ݹ�
//��򵥵ĺ����ݹ�
//���������������Ϊ�ݹ���õ�ջ�����
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//��ϰһ������һ������ֵ������˳���ӡ����ÿһλ����������1234�����1234��
//˼·1234%10�����õ���4
//123%10�����õ���3
//12%10�����õ���2
//1%10�����õ���1
//���»�С˼��
//�ݹ�
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
//��ϰ������д��������������ʱ���������ַ�������
//����һ��������ʱ����
//int my_strlen(char* str)//Ϊʲô��char*����Ϊ���鴫���Ǵ�������ĸԪ�صĵ�ַ
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//�ݹ�ķ���
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);//str+1��Ϊ�˵�ַ�����
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