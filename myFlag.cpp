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
	dropFlag();
	if (exp > MAX_E) {
		setFlag();
		setMant(MAX_M);
		setExp(MAX_E);
		print();
	} else if ( exp < MIN_E ) {
		setFlag();
		setMant(MIN_M);
		setExp(MIN_E);
		print();
	}
}

void myFlag::print() {
	if ( flg != 0 ) cout<<"*";
	MyFloat::print();
}

bool myFlag::getFlag() {
	return flg;
}

void myFlag::setFlag() {
	flg = true;
}

void myFlag::dropFlag() {
	flg = false;
}

myFlag operator+(myFlag a, myFlag b) {
	myFlag result;
	result = myFlag((MyFloat) a + (MyFloat) b);
	result.checkSatur();
	return result;
}

myFlag operator-(myFlag a, myFlag b) {
	myFlag result;
	result = myFlag((MyFloat) a - (MyFloat) b);
	result.checkSatur();
	return result;
}

myFlag operator*(myFlag a, myFlag b) {
	myFlag result;
	result = myFlag((MyFloat) a * (MyFloat) b);
	result.checkSatur();
	return result;
}

myFlag operator/(myFlag a, myFlag b) {
	myFlag result;
	result = myFlag((MyFloat) a / (MyFloat) b);
	result.checkSatur();
	return result;
}
