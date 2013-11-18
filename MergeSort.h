#pragma once
#include "ISortingAlgorithms.h"

class MergeSort : public ISortingAlgorithms{
public:
	void sort(std::vector<int>& v);
private:
	std::vector<int> mergeSort(std::vector<int> v);
	std::vector<int> merge(std::vector<int>left, std::vector<int>right);
};