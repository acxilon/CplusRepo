#pragma once
class CResult
{
private:
	int beginIndex;
	int endIndex;
	int sum;
public:
	CResult() {}
	CResult(int l, int r, int s) {
		this->beginIndex = l;
		this->endIndex = r;
		this->sum = s;
	}
	int getBeginIndex() const {
		return this->beginIndex;
	}
	int getEndIndex() const {
		return this->endIndex;
	}
	int getSum() const {
		return this->sum;
	}
	void setBeginIndex(int beginIndex) {
		this->beginIndex = beginIndex;
	}
	void setEndIndex(int endIndex) {
		this->endIndex = endIndex;
	}
	void setSum(int sum) {
		this->sum = sum;
	}
	bool operator<(const CResult* r) const;
	bool operator==(const CResult* r)const;
	bool operator>(const CResult* r) const;
	bool operator<=(const CResult* r) const;
	bool operator>=(const CResult* r) const;
};

