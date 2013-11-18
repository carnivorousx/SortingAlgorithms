#pragma once
#include "SortingAlgoFactory.h"
#include <algorithm>
#include "Stopwatch.h"
#include <algorithm>
#include <stdlib.h>
#define TESTCASE_LENGTH 1000
class Testor
{
public:
	Testor(int mode, int len);
	~Testor();
	void test(std::string name);
private:
	ISortingAlgorithms* algorithm;
	int mode;
	int length;
};