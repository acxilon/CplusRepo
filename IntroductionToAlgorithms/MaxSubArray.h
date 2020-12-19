#pragma once

struct Result
{
	int beginIndex;
	int endIndex;
	int sum;
public:
	Result(int l,int r,int s) {
		this->beginIndex = l;
		this->endIndex = r;
		this->sum = s;
	}
};

class MaxSubArray
{
public:
	static Result* getMaxSubArray(int* a,int beginIndex,int EndIndex);
	static Result* getCrossingMaxSubArray(int* a, int beginIndex, int midIndex, int EndIndex);
};





