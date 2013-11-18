#include "SortingAlgoFactory.h"
#include "InsertSort.h"
#include "SelectionSort.h"
#include "ShellSort.h"
#include "HeapSort.h"
#include "QuickSort.h"
#include "MergeSort.h"

ISortingAlgorithms* SortingAlgoFactory::creatObj(std::string name){
	if (name == "InsertSort")
		return new InsertSort();
	else if (name == "SelectionSort")
		return new SelectionSort();
	else if (name == "ShellSort")
		return new ShellSort();
	else if (name == "HeapSort")
		return new HeapSort();
	else if (name == "QuickSort")
		return new QuickSort();
	else if (name == "QuickSort_2")
		return new QuickSort_2();
	else if (name == "MergeSort")
		return new MergeSort();
	else
		return NULL;
}