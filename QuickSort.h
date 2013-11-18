#pragma once
#include "ISortingAlgorithms.h"
//quicksort1 use the last one as a pivot
class QuickSort : public ISortingAlgorithms{
public:
	void sort(std::vector<int>& v);
private:
	void quick(std::vector<int>& v, int start, int end);
	int partition(std::vector<int>&v, int start, int end);
};
//quicksort2 use a random pivot;
class QuickSort_2 : public ISortingAlgorithms{
public:
	void sort(std::vector<int>& v);
private:
	void quick(std::vector<int>& v, int start, int end);
	int partition(std::vector<int>&v, int start, int end);
};


