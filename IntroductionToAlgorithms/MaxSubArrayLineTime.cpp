#include "MaxSubArrayLineTime.h"

CResult* MaxSubArrayLineTime::getMaxSubArray(int* a,int length)
{
	int boundry = a[0];//边界最大子数组的和
	int maxArray = a[0];//前最大子数组的和
	int beginIndex = 0;//开始索引
	int endIndex = 0;//结束索引
	for (int i = 1; i < length; i++) {
		//start 寻找最大边界子数组
		if (boundry + a[i] > a[i]) {//边界子数组不止包含边界
			boundry += a[i];//通过前边界最大子数组来求现边界最大子数组
		}else {//边界子数组只包含边界
			beginIndex = i;
			boundry = a[i];
		}//end 寻找最大边界子数组
		
		if (maxArray < boundry) {//寻找当前索引下的最大子数组
			maxArray = boundry;
			endIndex = i;
		}
	}
	return new CResult(beginIndex,endIndex,maxArray);
}
