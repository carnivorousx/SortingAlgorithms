//
//
//
#ifndef SORTINGALGORITHMS_H
#define SORTINGALGORITHMS_H

#include "Stopwatch.h"
#include "WindowsStopwatch.h"
#include <string>
#include <iostream>
#include <vector>

class ISortingAlgorithms
{
public:
	ISortingAlgorithms(){};
	virtual ~ISortingAlgorithms(){};
	virtual void sort(std::vector<int>& testcase) = 0 ;
};

#endif