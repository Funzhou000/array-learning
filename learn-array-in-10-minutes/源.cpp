#include<stdio.h>
int main() {
	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int* p = array;
	for (i = 0;i < 10;i++)
	{
		printf("%p\n", &array[i]);//%p用于打印地址
	}

	return 0;
}