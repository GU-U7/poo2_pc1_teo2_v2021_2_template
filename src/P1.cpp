#include "p1.h"

join_vectors_t::join_vectors_t(initializer_list<int> il1, initializer_list<int> il2):l1(distance(begin(il1),end(il1))), l2(distance(begin(il2), end(il2))){
	arr = new int[l1+l2];
	vector<int>_temp(begin(il1), end(il1));
	for(auto i: il2) _temp.push_back(i);
	sort(_temp.begin(), _temp.end());
	copy(_temp.begin(), _temp.end(), arr);
}
join_vectors_t::join_vectors_t(vector<int> v1, vector<int> v2):l1(v1.size()), l2(v2.size()){
	arr=new int[l1+l2];
	vector<int>_temp = v1;
	for(auto i: v2) _temp.push_back(i);
	sort(_temp.begin(), _temp.end());
	copy(_temp.begin(), _temp.end(), arr);
}

join_vectors_t::~join_vectors_t(){
	
	delete[] arr;
}

size_t join_vectors_t::size(){
	return l1+l2;
}

int* join_vectors_t::operator!(){
	reverse(arr, arr+l1+l2);
	return arr;
}

int* join_vectors_t::operator()(){
	return arr;
}
