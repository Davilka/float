#include <iostream>
#include "myFlag.h"
#include "MyFloat.h"

using namespace std;

int main() {
	double v1, v2;
    //printf("%s", "\nВведите число 1: ");
	cout<<endl<<"Введите число 1: ";
    //scanf("%lf", &v1);
	cin>>v1;
    //printf("%s", "\nВведите число 2: ");
	cout<<endl<<"Введите число 2: ";
    //scanf("%lf", &v2);
	cin>>v2;
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
	MyFloat div;
	div = first / second;
	cout<<endl<<"Sum: ";
	summ.print();
	cout<<endl<<"Resid: ";
    resid.print();
	cout<<endl<<"Multi: ";
	mult.print();
	cout<<endl<<"Div: ";
	div.print();

	myFlag fl1(v1);
	myFlag fl2(v2);
	myFlag flSum;
	myFlag flRes;
	myFlag flMult;
	myFlag flDiv;
	fl1.print();
	fl2.print();
	flSum = fl1 + fl2;
	flRes = fl1 - fl2;
	flMult = fl1 * fl2;
	flDiv = fl1 / fl2;

	cout<<endl<<"Sum: ";
	flSum.print();
	cout<<endl<<"Res: ";
	flRes.print();
	cout<<endl<<"Mult: ";
	flMult.print();
	cout<<endl<<"Div: ";
	flDiv.print();
	return 0;
}