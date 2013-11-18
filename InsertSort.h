#include "SortingAlgoFactory.h"
#include "ISortingAlgorithms.h"

class InsertSort : public ISortingAlgorithms
{
public:
	InsertSort();
	~InsertSort();
	void sort(std::vector<int>& testcase);
};