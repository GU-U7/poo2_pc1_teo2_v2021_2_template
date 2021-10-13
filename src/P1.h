//
// Created by rudri on 10/11/2020.
//

#ifndef POO2_PC1_TEO2_V2021_2_P1_H
#define POO2_PC1_TEO2_V2021_2_P1_H


#ifndef p1_h
#define p1_h

#include<initializer_list>
#include<vector>
#include<algorithm>
#include<iostream>
#include<iterator>

using namespace std;

class join_vectors_t{
	public:
	join_vectors_t()=default;
	join_vectors_t(initializer_list<int> il1, initializer_list<int> il2);
	join_vectors_t(vector<int> v1, vector<int> v2);
	~join_vectors_t();

	size_t size();

	int* operator!();
	int* operator()();	
	private:
	int *arr;
	size_t l1,l2;
};

#endif

#endif //POO2_PC1_TEO2_V2021_2_P1_H
