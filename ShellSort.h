#pragma once
#include "ISortingAlgorithms.h"

class ShellSort : public ISortingAlgorithms{
public:
	void sort(std::vector<int>& v);
};