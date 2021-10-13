//
// Created by rudri on 10/11/2020.
//

#include "P2.h"

bool es_cero(const vector<int>& _cont ){
	int _ret=0;
	for(int i: _cont) _ret+=i;
	if(_ret==0) return true;
	return false;
}
