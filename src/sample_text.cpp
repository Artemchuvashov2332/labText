#include <iostream>
#include "include/text.h"
using namespace std;

int main()
{
	setlocale(0, "");
	MyList utext("�������� �.�.");
	utext.push_back_current_level("����� ���� ��������");
	utext.push_back_next_level("�������� �������");
	utext.push_back_next_level("�� ����� ��������");
	utext.push_back_current_level("������ ��������������� �����");
	utext.print();

	cout <<endl<< endl;

	utext.pop();
	utext.print();

	cout << endl<<endl;
	
	utext.pop();
	utext.print();

	system("pause");
	return 0;
}

