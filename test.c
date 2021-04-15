
#define _CRT_SECURE_NO_WARING
#include <stdio.h>


//1.C语言常见的错误分类包含：
//①编译错误
//②链接错误
//③运行时错误


// 2.关于vs调试快捷键说法错误的是：
//①F10 - 是逐过程调试，遇到函数不进入函数
//②F11 - 是逐语句调试，可以观察调试的每个细节
//③F9是设置断点和取消断点
//④F5是开始调试


//3.关于debug和release的区别说法：
//①debug被称为调试版本，程序调试找bug的版本
//②release被称为发布版本，调试人员测试的就是release版本
//③debug版本包含调试信息，不做优化
//④release版本不可以调试


//4.const int* p 与 int const* p等价


//5.语言中 char*const p  声明了一个指向char类型变量的指针p，p的值不可修改，但p指向的变量值可以修改


//6.调整奇数偶数顺序：调整数组使奇数全部都位于偶数前面
//输入一个整数数组，实现一个函数
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分




void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//从左边开始找一个偶数
//从右边开始找一个奇数
//把他们交换

void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//从左边找偶数
		while ( (left < right) && (arr[left] % 2 == 1))//防止都是奇数
		{
			left++;
		}
		//从右边找奇数
		while ((left < right) && (arr[right] % 2 == 0))//防止都是偶数
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr, sz);
	return 0;
}