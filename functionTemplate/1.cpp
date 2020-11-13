#include<iostream>
using namespace std;

template<typename T>
int compare(const T &v1,const T &v2)
{
	if (v1<v2) return -1;
	if (v2<v1) return 1;
	return 0;
}

int main()
{
	cout<<compare(1,4)<<endl;
	cout<<compare(131.4324,131.4323)<<endl;
	return 0;
}
