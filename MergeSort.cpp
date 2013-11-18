#include "MergeSort.h"

void MergeSort::sort(std::vector<int>& v){
	v = mergeSort(v);
}
std::vector<int> MergeSort::mergeSort(std::vector<int> v){
	std::vector<int> ret;
	if (v.size() >= 2){
		std::vector<int> left(v.begin()+0, v.begin() + v.size() / 2);
		std::vector<int> right(v.begin() + v.size() / 2, v.end() + 0);
		std::vector<int> orderedLeft, orderedRight;
		orderedLeft = mergeSort(left);
		orderedRight = mergeSort(right);
		ret = merge(orderedLeft, orderedRight);
	}
	else if(v.size()>0){
		ret.push_back(v[0]);
	}
	return ret;
}
std::vector<int> MergeSort::merge(std::vector<int>left, std::vector<int>right){
	int l = 0, r = 0;
	std::vector<int> ret;
	while (l <= left.size() - 1 && r <= right.size() - 1){
		if (left[l] < right[r]){
			ret.push_back(left[l]);
			l++;
		}
		else{
			ret.push_back(right[r]);
			++r;
		}
	}
	if (l == left.size()){
		while (r < right.size()){
			ret.push_back(right[r]);
			r++;
		}
	}
	else{
		while (l < left.size()){
			ret.push_back(left[l]);
			l++;
		}
	}
	return ret;
}