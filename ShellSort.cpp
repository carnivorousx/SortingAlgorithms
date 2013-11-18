#include "ShellSort.h"

void ShellSort::sort(std::vector<int>& v){
	int tmp = 1;
	std::vector<int> h;
	while (tmp < v.size()){
		h.push_back(tmp);
		tmp = tmp*3+1;
	}
	for (int i = h.size() - 1; i >= 0; --i){
		for (int j = 0; j<h[i]; ++j){
			int k = 1; 
			while (j + k*h[i] < v.size()){
				int m;
				tmp = v[j + k*h[i]];
				for (m = k - 1; m >= 0; --m){	
					if (v[j + m*h[i]]>tmp)
						v[j + (m + 1)*h[i]] = v[j + m*h[i]];
					else{
						break;
					}
				}
				v[j + (m+1)*h[i]] = tmp;
				++k;
			}
		}
	}
}