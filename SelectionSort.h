#pragma once
#include "ISortingAlgorithms.h"	

class SelectionSort : public ISortingAlgorithms{
public:
	SelectionSort();
	~SelectionSort();
	void sort(std::vector<int>& testcase);
};