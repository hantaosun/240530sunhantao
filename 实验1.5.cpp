#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout << "input �����¶�:";
	float h, s;
	cin >> h;
	s = (h - 32) / 1.8;
	cout << "��Ӧ�������¶���:" <<fixed<<setprecision(2)<< s;
}