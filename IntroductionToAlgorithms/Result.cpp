#include "Result.h"

bool CResult::operator<(const CResult* r) const
{
	if (this->getSum() < r->getSum()) {
		return true;
	}
	else {
		return false;
	}
}

bool CResult::operator==(const CResult* r) const
{
	if (this->getSum() == r->getSum()) {
		return true;
	}
	return false;
}

bool CResult::operator>(const CResult* r) const
{
	if (this->getSum() > r->getSum()) {
		return true;
	}
	return false;
}

bool CResult::operator<=(const CResult* r) const
{
	if (this->getSum() <= r->getSum())
		return true;
	return false;
}

bool CResult::operator>=(const CResult* r) const
{
	if (this->getSum() >= r->getSum()) {
		return true;
	}
	return false;
}
