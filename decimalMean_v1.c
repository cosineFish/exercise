/*************���ƾ�ֵ****************/
/*************version 1***************/
#include <stdio.h>
#include <math.h>
#define u16 unsigned int 
//��������
u16 GetSum(u16 number);
u16 BitsConvert(u16 x,u16 n); 
int main(void)
{
	u16 A;
	u16 X,Y;
	while(1)
	{ 
		//����A 
		printf("\nInput A:");
		scanf("%u",&A);
		//A = 3;
		//����
		X = GetSum(A);
		//������
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
	//��س�ʼ�� 
	y = x;
	z = fmod(x,n);
	result = 0;
	do
	{
		z = fmod(y,n);
		y /= n;//��ı�y��ֵ ���ɷ�����һ���ǰ�� 
		result += z;
		//����ע������ڵ��Թ���ʹ��
		//printf("z = %u\n",z); 
		//getchar();
	}while(y != 0);
	//printf("result = %u\n",result);
	return result;
}

