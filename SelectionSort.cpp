#include "SelectionSort.h"

SelectionSort::SelectionSort(){

}

SelectionSort::~SelectionSort(){

}

void SelectionSort::sort(std::vector<int>& v){
	for (int i = 0; i < v.size(); ++i){
		int smallest = i;
		for (int j = i; j < v.size(); ++j){
			if (v[j] < v[smallest])
				smallest = j;
		}
		int tmp = v[smallest];
		v[smallest] = v[i];
		v[i] = tmp;
	}
}