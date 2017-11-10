/*************进制均值****************/
/*************version 1***************/
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
		//printf("Sum = %u\n",sum);
	}
	return sum;
}

u16 BitsConvert(u16 x,u16 n)
{
	u16 y,z,result;
	//务必初始化 
	y = x;
	z = fmod(x,n);
	result = 0;
	do
	{
		z = fmod(y,n);
		y /= n;//会改变y的值 不可放在上一语句前面 
		result += z;
		//以下注释语句在调试过程使用
		//printf("z = %u\n",z); 
		//getchar();
	}while(y != 0);
	//printf("result = %u\n",result);
	return result;
}

