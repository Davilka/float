//
// Created by davilka on 09.11.17.
//

#pragma once
#ifndef FLOAT_MYFLOAT_H
#define FLOAT_MYFLOAT_H

class MyFloat {
private:
	int mant;
	int expn;
public:
	MyFloat() {}

	MyFloat(double v) {
		int e=0;
		while (v >= 1 || v <= -1) {
			v /= 2;
			e++;
		}
		while ((v > 0 && v < 0.5) || (v > -0.5 &&  v < 0)) {
			v *= 2;
			e--;

		}
		setMant((int) (v * 10000));
		setExp(e);
	}

	MyFloat(int m, int e) {
		while (m >= 10000 || m <= -10000) {
			m /= 2;
			e++;
		}
		while ((m > 0 && m < 5000) || (m > -5000 &&  m < 0)) {
			m *= 2;
			e--;

		}
		setMant(m);
		setExp(e);
	}

	MyFloat(MyFloat const &f) {
		setMant(f.mant);
		setExp(f.expn);
	}

	void print();
    double restore();
	int getMant();
	int getExp();
	void setMant(int);
	void setExp(int);

    friend MyFloat operator +(MyFloat, MyFloat);
    friend MyFloat operator -(MyFloat, MyFloat);
    friend MyFloat operator *(MyFloat, MyFloat);
    friend MyFloat operator /(MyFloat, MyFloat);
};


#endif //FLOAT_MYFLOAT_H