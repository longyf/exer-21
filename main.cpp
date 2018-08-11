#include <iostream>
#include <vector>
#include "reOrder.h"
using namespace std;
void test1() {
	cout<<"Test1"<<endl;
	vector<int> v1 = {1, 2, 3, 4, 5, 6, 7};
	reOrder(&v1, isOdd);
	for (auto iter = v1.begin(); iter != v1.end(); ++iter) {
		cout<<*iter<<" ";
	}
	cout<<endl;
}

void test2() {
	cout<<"Test2"<<endl;
	vector<int> v1 = {2, 4, 6, 1, 3, 5, 7};
	reOrder(&v1, isOdd);
	for (auto iter = v1.begin(); iter != v1.end(); ++iter) {
		cout<<*iter<<" ";
	}
	cout<<endl;
}

void test3() {
	cout<<"Test3"<<endl;
	vector<int> v1 = {1, 3, 5, 7, 2, 4, 6};
	reOrder(&v1, isOdd);
	for (auto iter = v1.begin(); iter != v1.end(); ++iter) {
		cout<<*iter<<" ";
	}
	cout<<endl;
}

void test4() {
	cout<<"Test4"<<endl;
	vector<int> v1 = {1};
	reOrder(&v1, isOdd);
	for (auto iter = v1.begin(); iter != v1.end(); ++iter) {
		cout<<*iter<<" ";
	}
	cout<<endl;
}

void test5() {
	cout<<"Test5"<<endl;
	vector<int> v1 = {2};
	reOrder(&v1, isOdd);
	for (auto iter = v1.begin(); iter != v1.end(); ++iter) {
		cout<<*iter<<" ";
	}
	cout<<endl;
}

void test6() {
	cout<<"Test6"<<endl;
	reOrder(nullptr, isOdd);
/*	for (auto iter = v1.begin(); iter != v1.end(); ++iter) {
		cout<<*iter<<" ";
	}*/
//	cout<<endl;
}

int main() {
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	return 0;
}
