#include "InsertionSort.h"
#include "MaxSubArray.h"
#include "Result.h"
#include "MaxSubArrayLineTime.h"
#include <iostream>
using namespace std;

void testInsertionSort() {
	int a[] = { 5,2,4,6,1,3 };
	int len = sizeof(a) / sizeof(int);
	cout << "数组长度为: " << len << endl;
	InsertionSort::sort(a, len);
	for (size_t i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void testMaxSubArray() {
	int a[] = {13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};
	int length = sizeof(a) / sizeof(int);
	Result* r = MaxSubArray::getMaxSubArray(a, 0, length - 1);
	cout << r->beginIndex <<" "<< r->endIndex <<" "<< r->sum << endl;
	delete r;
}

void testMaxSubArrayLineTime() {
	int a[] = { 13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7 };
	int length = sizeof(a) / sizeof(int);
	CResult* r = MaxSubArrayLineTime::getMaxSubArray(a, length);
	printf("最大子数组开始索引: %d 结束索引: %d 和为: %d", r->getBeginIndex(), r->getEndIndex(), r->getSum());
	delete r;
}


int main() {
	//testInsertionSort();
	//testMaxSubArray();
	testMaxSubArrayLineTime();
}

