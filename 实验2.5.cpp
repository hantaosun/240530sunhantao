#include<iostream>
using namespace std;
int main()
{
	char m[100];
	cin.getline(m, 100);
	int zimu(0), fuhao(0), shuzi(0), kongge(0);
	for (int i = 0; int(m[i])!= int('\0'); i++)
	{
		if (isalpha(int(m[i]))) zimu += 1;
		if (isdigit(int(m[i]))) shuzi += 1;
		if (isspace(int(m[i])))	kongge += 1;
		if (ispunct(int(m[i]))) fuhao += 1;
	}
	cout << "��ĸ" << zimu << "��";
	cout << "����" << shuzi<< "��";
	cout << "�ո�" << kongge<< "��";
	cout << "����" << fuhao << "��";
}