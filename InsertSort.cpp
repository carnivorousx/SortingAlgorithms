#pragma once
#include "InsertSort.h"	

InsertSort::InsertSort()
{

}

InsertSort::~InsertSort(){

}

void InsertSort::sort(std::vector<int>& v)
{
	for (int i = 1; i < v.size(); ++i){
		int tmp = v[i];
		int j;
		for (j = i-1; j >= 0; j--){
			if (v[j]>tmp)
				v[j + 1] = v[j];
			else{				
				break;
			}
		}
		v[j + 1] = tmp;
	}
}




