#include <iostream>
#include <vector>
using namespace std;

void func(vector<int> *v1) {
	(*v1)[0] = 2;
	cout<<"The size is "<<v1->size()<<endl;
}

int main() {
	vector<int> v1;
	v1.push_back(1);
	cout<<v1[0]<<endl;
	func(&v1);
	cout<<v1[0]<<endl;
	return 0;
}
