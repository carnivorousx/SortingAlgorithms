#pragma once

#include "ISortingAlgorithms.h"

class SortingAlgoFactory
{
public:
	static ISortingAlgorithms* creatObj(std::string name);
};