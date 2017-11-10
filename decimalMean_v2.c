/*************进制均值****************/
/*************version 2***************/
#include <stdio.h>
#include <math.h>
#define u16 unsigned int 
//函数声明
u16 GetSum(u16 number);
u16 BitsConvert(u16 x,u16 n); 
int main(void)
{
	u16 A;
	u16 X,Y;
	while(1)
	{ 
		//输入A 
		printf("\nInput A:");
		scanf("%u",&A);
		//A = 3;
		//运算
		X = GetSum(A);
		//输出结果
		printf("\nAnswer:%d/%d\n",X,(A-2));
		getchar(); 
	}
	return 1;
}

u16 GetSum(u16 number)
{
	u16 i,sum = 0;
	for(i = 2;i < number;i ++)
	{
		sum += BitsConvert(number,i); 
	}
	return sum;
}

u16 BitsConvert(u16 x,u16 n)
{
	//务必初始化 
	u16 result = 0;
	do
	{
		result += fmod(x,n);
		x /= n;
	}while(x != 0);
	return result;
}

