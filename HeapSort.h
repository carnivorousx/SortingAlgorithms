#pragma once
#include "ISortingAlgorithms.h"

class HeapSort : public ISortingAlgorithms{
public:
	void sort(std::vector<int>& testcase);
private:
	void fixdown(std::vector<int>& testcase, int pos, int size);
	int leftchild(int i);
	int rightchild(int i);
};