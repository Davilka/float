//
// Created by davilka on 07.12.17.
//
#pragma once
#include "MyFloat.h"
#define MAX_M 9999
#define MIN_M -9999
#define MAX_E 31
#define MIN_E -31


class myFlag : public MyFloat {
private:
	bool flg;
public:
	myFlag(): MyFloat() { checkSatur(); }
	myFlag(double d) : MyFloat(d) { checkSatur(); }
	myFlag(int m, int e, bool f=0) : MyFloat(m, e), flg(f) { checkSatur(); }
	myFlag(MyFloat fl) : MyFloat(fl) { checkSatur(); }
	myFlag(const myFlag &fl) : MyFloat(fl) { checkSatur(); }
	void print();
	void checkSatur();
	bool getFlag();
	void setFlag();
	void dropFlag();
	friend myFlag operator +(myFlag, myFlag);
	friend myFlag operator -(myFlag, myFlag);
	friend myFlag operator *(myFlag, myFlag);
	friend myFlag operator /(myFlag, myFlag);
};
