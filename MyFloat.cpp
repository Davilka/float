//
// Created by davilka on 09.11.17.
//

#include <stdio.h>
#include <iostream>
#include "MyFloat.h"

using namespace std;

void MyFloat::print(void) {
    //printf("\nMant+Exp: %1.4f*2**%d Mant: %d Exp: %d Restored: %f",((double) getMant())/10000, getExp(), getMant(), getExp(), this->restore());
	//printf("\nMant: %4d, Exp: %d", this->mant, this->exp);
	cout<<"Mant: "<<getMant()<<", Exp: "<<getExp()<<", Restored: "<<restore()<<endl;
}

double MyFloat::restore() {
    double fmant;
	int mant, exp;
	mant = getMant();
	exp = getExp();
    fmant = (double) mant/10000;
    while (exp > 0) {
	    fmant *= 2;
	    exp--;
    }
	while (expn < 0) {
		fmant /= 2;
		exp++;
	}
	return fmant;
}

int MyFloat::getMant() {
	return mant;
}

void MyFloat::setMant(int m)  {
	mant = m;
}

int MyFloat::getExp() {
	return expn;
}

void MyFloat::setExp(int e)  {
	expn = e;
}

MyFloat operator+(MyFloat a, MyFloat b) {
	int amant, aexp, bmant, bexp;
	amant = a.getMant();
	aexp = a.getExp();
	bmant = b.getMant();
	bexp = b.getExp();
	while (aexp > bexp) {
		amant *= 2;
		aexp--;
	}
	while (aexp < bexp) {
		amant /= 2;
		aexp++;
	}
	return MyFloat(amant+bmant, aexp);
}

MyFloat operator-(MyFloat a, MyFloat b) {
	int amant, aexp, bmant, bexp;
	amant = a.getMant();
	aexp = a.getExp();
	bmant = b.getMant();
	bexp = b.getExp();
	while (aexp > bexp) {
		amant *= 2;
		aexp--;
	}
	while (aexp < bexp) {
		amant /= 2;
		aexp++;
	}
	return MyFloat(amant-bmant, aexp);
}

MyFloat operator*(MyFloat a, MyFloat b) {
	return MyFloat((a.mant*b.mant)/10000, a.expn+b.expn);
}

//MyFloat operator/(MyFloat a, MyFloat b) {}




