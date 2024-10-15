#include<stdio.h>
int main() {
	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10) {
		printf("%d", array [i]);//printf("%d", array )打印的是内存地址
		i++;
	}



	return 0;
}