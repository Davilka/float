#include <iostream>
#include "myFlag.h"
#include "MyFloat.h"

using namespace std;

int main() {
	double v1, v2;
    /*/printf("%s", "\nВведите число 1: ");
	cout<<endl<<"Введите число 1: ";
    //scanf("%lf", &v1);
	cin>>v1;
    //printf("%s", "\nВведите число 2: ");
	*/
	cout<<endl<<"Введите число 2: ";
    //scanf("%lf", &v2);
	cin>>v2;
	/*
	//printf("v1: %lf, v2: %lf", v1, v2);
	MyFloat first(v1);
    MyFloat second(v2);
	first.print();
    second.print();
	MyFloat summ;
	summ = first + second;
    MyFloat resid;
	resid = first - second;
	MyFloat mult;
	mult = first * second;
	//printf("%s", "\nSum: ");
	cout<<endl<<"Sum: ";
	summ.print();
	//printf("%s", "\nResid: ");
	cout<<endl<<"Resid: ";
    resid.print();
	//printf("%s", "\nMulti: ");
	cout<<endl<<"Multi: ";
	mult.print();
*/
	myFlag fl1(1000000, 120);
	myFlag fl2(v2);
	myFlag flSum;
	myFlag flRes;
	myFlag flMult;
	fl1.print();
	fl2.print();
	flSum = fl1 + fl2;
	flRes = fl1 - fl2;
	flMult = fl1 * fl2;

	flSum.print();
	flRes.print();
	flMult.print();
	return 0;
}