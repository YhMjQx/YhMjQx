#include<stdio.h>
void test1(int arr[])
{}
void test2(int arr[10])//这里数组符号[]中的数组元素个数可写可不写，没有任何影响
{}
void test3(int *arr)//普通的数组传参传进来的是首元素地址，此时就用一级指针来接收作为形参
{}
void test4(int* *arr)//二级指针用来存放一级指针变量的地址
{}
void test5(int *arrr[20])//指针数组在这里传参的话，这里的[20]中的20是不能被省略的
{}
int main()
{
	//一维数组传参
	int arr1[10] = { 0 };
	test1(arr1);
	test2(arr1);
	test3(arr1);
	int *arr2[20] = { 0 };//这是一个指针数组，数组内的元素都是地址，也可称为一级指针，那么一级指针进行传参，传进去就放在二级指针当中
	test4(arr2);//那么一级指针进行传参，传进去就放在二级指针当中，就行普通的数组传参传进去能放在一个指针当中一样，只不过是指针级别加一
	test5(arr2);//我可以理解为，这些二级指针就是存放一级指针的地址，也就是地址的地址，因为arr2是这个数组的首地址，而传过来是首元素的地址，也就是首地址的地址，指针的地址
	return 0;
}