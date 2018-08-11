#ifndef RE_ORDER_H
#define RE_ORDER_H
#include <iostream>
#include <vector>
using namespace std;

bool isOdd(const int &val) {
	if (val % 2 != 0)
		return true;
	else
		return false;
}

void reOrder(vector<int> *v1, bool (*isOdd)(const int &)) {
	if (v1 == nullptr)
		return;
	unsigned int indexBefore = 0;
	unsigned int indexAfter = v1->size() - 1;
	while (indexBefore < indexAfter) {
		if ( (!isOdd((*v1)[indexBefore])) && (isOdd((*v1)[indexAfter])) ) {
			swap((*v1)[indexBefore], (*v1)[indexAfter]);
		}
		if (isOdd((*v1)[indexBefore])) indexBefore++;
		if (!isOdd((*v1)[indexAfter])) indexAfter--;
	}
}
#endif
