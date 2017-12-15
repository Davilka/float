#pragma once
#include "MyFloat.h"
#define MAX_M 9999
#define MIN_M -9999
#define MAX_E 99
#define MIN_E -99


class myFlag : public MyFloat {
//private:
private:
	bool flg;
public:
	myFlag(): MyFloat() {}
	myFlag(double d) : MyFloat(d) { checkSatur(); }
	myFlag(int m, int e, bool f=0) : MyFloat(m, e), flg(f) { checkSatur(); }
	//myFlag(const myFlag &fl) : MyFloat(fl.getMant(), fl.getExp()) { checkSatur(); }
	void printFlag();
	void checkSatur();
	bool getFlag();
	void setFlag(bool);
};