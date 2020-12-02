#define _CRT_SECURE_NO_WARNINGS  1

#include<stdio.h>
#include<stdlib.h>


////3.#define定义的标识符常量
//#define PI 3.14//这里的PI是常量
//
//int main(){
//	int sum;//这里的sum就是一个变量
//	const int a=3;//这里的a就是一个常量
	//const int n=10;
	//int arr[n]={0};//编译失败，因为n本质上还是一个变量
	////2.n是变量，但是又有常属性，所以我们说n是常变量，即用const 定义n后，n的值不能改

	//枚举常量
	//枚举，即一一列举
	//性别：男，女
	//星期：1,2,3,4,5,6,7
	enum Sex 
	{
		male,//记住此处是逗号
		female,
	};//记住此处有分号
	int main()
	{
		enum Sex a=female;//a是变量，female是常量，即运行s=male是可以的，但运行female=2时不通过的
		printf("%d\n",male);//默认为0
		printf("%d\n",female);//默认为1
		system("pause");

	}
	//1.3就是一个字面常量
