#include<stdio.h>
//他们的操作数都是整数
int main()
{
	//按位与-&	
	//00000000000000000000000000000011  -3
	//00000000000000000000000000000101  -5
	//00000000000000000000000000000001  -1
	//有0则为0，全为1才是1
	int a = 3;
	int b = 5;
	int c = a&b;
	printf("按位与后的结果=%d\n", c);
	//按位或-|
	//00000000000000000000000000000011  -3
	//00000000000000000000000000000101  -5
	//00000000000000000000000000000111  -7
	//有1则为1，全为0才是0
	int d = 3;
	int e = 5;
	int f = d | e;
	printf("按位或后的结果=%d\n", f);
	//按位异或-^
	//00000000000000000000000000000011  -3 
	//00000000000000000000000000000101  -5
	//00000000000000000000000000000110  -6
	//相同为0，不同为1
	int x = 3;
	int y = 5;
	int z = x^y;
	printf("异或后的结果=%d\n", z);
	return 0;
}