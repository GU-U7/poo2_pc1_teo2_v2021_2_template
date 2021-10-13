//
// Created by rudri on 10/11/2020.
//

#ifndef POO2_PC1_TEO2_V2021_2_P2_H
#define POO2_PC1_TEO2_V2021_2_P2_H


#ifndef p2_h
#define p2_h

#include<vector>
#include<iterator>
#include<cmath>
#include<deque>
#include<list>
#include<forward_list>
#include<set>
#include<algorithm>
using namespace std;

bool es_cero(const vector<int>& _cont );

template<template<typename...>class Container=vector, template<typename...>class Generic>
Container<Generic<int>> get_zero_sum_ranges(const Generic<int> &_cont){
	Container<Generic<int>> _return;
	set<Generic<int>>_set_return;

	vector<int> arr(begin(_cont), end(_cont));
	
	int snum = 0;
	while(snum<pow(2,arr.size())){
		vector<int> subarr;
		for(int i=0;i<arr.size();++i){
			if((snum&(1<<i))!=0){
				subarr.push_back(arr[i]);
			}
        	}
		if(es_cero(subarr)){
			sort(subarr.begin(), subarr.end());
			Generic<int> _temp;
			_temp.resize(subarr.size());
			copy(subarr.begin(), subarr.end(), begin(_temp));
			_set_return.insert(_temp);
		}
		++snum;
	}

	_return.insert(_return.end(), _set_return.begin(), _set_return.end());

	return _return;
}



#endif 

#endif //POO2_PC1_TEO2_V2021_2_P2_H
