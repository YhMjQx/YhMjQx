#include<stdio.h>
int main()

{
	int a = 0;
	int b = 0;
	
	for (a=1;a<=10;a++)//要注意循环变量是从外面来的还是内部来的 
	{
		for (b=1;b<=10;b++)//第一次b循环完成达到10，又回到对a的循环，a++后b又回到初始值，注意内外关系 
		{
			printf("胡杨\n");
		}
	}//这里会打印100个胡杨
	
	for (; a <10; a++)
	{
		for (; b < 10; b++)//只要在这个for循环中加上j的初始化条件好了 
		{
			printf("胡杨");//第一次进来循环后b就已经变成了10，而第二次进来这个循环后，由于无法给b初始化，固依旧是10
		}
	}//这里只会打印10个胡杨
	return 0;
}
