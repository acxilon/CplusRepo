#include "MaxSubArray.h"
#include <climits>

Result* MaxSubArray::getCrossingMaxSubArray(int* a, int l, int m, int r) {
	int leftSum = INT_MIN;
	int sum = 0;
	int maxLeft = m;
	for (int i = m; i >= l; i--)//here use size_t will be true forever
	{
		sum += a[i];
		if (leftSum < sum) {
			leftSum = sum;
			maxLeft = i;
		}
	}
	sum = 0;
	int rightSum = INT_MIN;
	int maxRight = m + 1;
	for (int i = m + 1; i <= r; i++)
	{
		sum += a[i];
		if (rightSum < sum) {
			rightSum = sum;
			maxRight = i;
		}
	}
	return new Result(maxLeft, maxRight, leftSum + rightSum);


}

Result* MaxSubArray::getMaxSubArray(int * a,int low,int high) {
	if (low == high) {
		return new Result(low, high, a[low]);
	}else
	/*if (low < high) */{
		int mid = (low + high) / 2;
		Result* lr = getMaxSubArray(a, low, mid);
		Result* rr = getMaxSubArray(a, mid + 1, high);
		Result* mr = getCrossingMaxSubArray(a,low,mid,high);
		if (lr->sum >= rr->sum && lr->sum >= mr->sum) {
			delete rr;
			delete mr;
			return lr;
		}
		else if (rr->sum >= lr->sum && rr->sum >= mr->sum) {
			delete lr;
			delete mr;
			return rr;
		}
		else {
			delete lr;
			delete rr;
			return mr;
		}

	}
}


