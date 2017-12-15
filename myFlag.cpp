//
// Created by davilka on 07.12.17.
//

#include <iostream>
#include "myFlag.h"
#include "MyFloat.h"

using namespace std;

void myFlag::checkSatur() {
	int exp;
	exp = getExp();
	if (exp > MAX_E) {
		setFlag(1);
		printFlag();
		setMant(MAX_M);
		setExp(MAX_E);
	} else if ( exp < MIN_E ) {
		setFlag(1);
		printFlag();
		setMant(MIN_M);
		setExp(MIN_E);
	} else {
		setFlag(0);
	}
}

void myFlag::printFlag() {
	cout<<"*"<<endl;
}

bool myFlag::getFlag() {
	return flg;
}

void myFlag::setFlag(bool f) {
	flg = f;
}