#include "QuickSort.h"
#include <stdlib.h>
void QuickSort::sort(std::vector<int>& v){
	int e = v.size() - 1;
	quick(v, 0, e);
}

void QuickSort::quick(std::vector<int>& v, int s, int e){
	if (s < e){
		int q = partition(v, s, e);
		quick(v, s, q - 1);
		quick(v, q + 1, e);
	}
}
int QuickSort::partition(std::vector<int>& v, int s, int e){
	int i = s - 1;
	int x = v[e];
	for (int j = s; j <= e - 1; ++j){
		if (v[j] <= x){
			i++;
			int tmp = v[j];
			v[j] = v[i];
			v[i] = tmp;
		}
	}
	int tmp = v[e];
	v[e] = v[i+1];
	v[i+1] = tmp;
	return i + 1;
}

void QuickSort_2::sort(std::vector<int>& v){
	int e = v.size() - 1;
	quick(v, 0, e);
}

void QuickSort_2::quick(std::vector<int>& v, int s, int e){
	if (s < e){
		int q = partition(v, s, e);
		quick(v, s, q - 1);
		quick(v, q + 1, e);
	}
}
int QuickSort_2::partition(std::vector<int>& v, int s, int e){
	int r = rand()%(e - s + 1);
	int tmp1 = v[r + s];
	v[r + s] = v[e];
	v[e] = tmp1;
	int i = s - 1;
	int x = v[e];
	for (int j = s; j <= e - 1; ++j){
		if (v[j] <= x){
			i++;
			int tmp = v[j];
			v[j] = v[i];
			v[i] = tmp;
		}
	}
	int tmp = v[e];
	v[e] = v[i + 1];
	v[i + 1] = tmp;
	return i + 1;
}