#include<iostream>
using namespace std;
int main()
{
	while (1) {
	flag:
		cout << "input ����:";
		int a, b, c;
		cin >> a >> b >> c;
		if (a >= b + c || b >= a + c || c >= a + b)
		{
			cout << "������������" << endl;
			goto flag;
		}
		cout << "�ܳ�Ϊ" << a + b + c << endl;
		if (a == b || b == c || c == a)
			cout << "����������" << endl;
		else cout << "���ǵ���������" << endl;
	}
}