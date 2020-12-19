#include "MaxSubArrayLineTime.h"

CResult* MaxSubArrayLineTime::getMaxSubArray(int* a,int length)
{
	int boundry = a[0];//�߽����������ĺ�
	int maxArray = a[0];//ǰ���������ĺ�
	int beginIndex = 0;//��ʼ����
	int endIndex = 0;//��������
	for (int i = 1; i < length; i++) {
		//start Ѱ�����߽�������
		if (boundry + a[i] > a[i]) {//�߽������鲻ֹ�����߽�
			boundry += a[i];//ͨ��ǰ�߽���������������ֱ߽����������
		}else {//�߽�������ֻ�����߽�
			beginIndex = i;
			boundry = a[i];
		}//end Ѱ�����߽�������
		
		if (maxArray < boundry) {//Ѱ�ҵ�ǰ�����µ����������
			maxArray = boundry;
			endIndex = i;
		}
	}
	return new CResult(beginIndex,endIndex,maxArray);
}
