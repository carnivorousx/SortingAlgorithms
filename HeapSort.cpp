#include "HeapSort.h"

void HeapSort::sort(std::vector<int>& v){
	for (int i = v.size() - 1; i >= 0; --i){
		fixdown(v, i, v.size());
	}
	for (int i = v.size(); i >= 1; --i){
		int tmp = v[0];
		v[0] = v[i - 1];
		v[i - 1] = tmp;
		fixdown(v, 0, i-1);
	}
}

void HeapSort::fixdown(std::vector<int>& testcase, int pos, int size){
	while (leftchild(pos) < size){
		int childmaxindex = leftchild(pos);
		if (rightchild(pos) < size && testcase[rightchild(pos)]>testcase[childmaxindex])
			childmaxindex = rightchild(pos);
		if (testcase[pos] < testcase[childmaxindex]){
			int tmp = testcase[pos];
			testcase[pos] = testcase[childmaxindex];
			testcase[childmaxindex] = tmp;
		}
		pos = childmaxindex;
	}
}

int HeapSort::leftchild(int i){
	return i * 2 + 1;
}

int HeapSort::rightchild(int i){
	return i * 2 + 2;
}