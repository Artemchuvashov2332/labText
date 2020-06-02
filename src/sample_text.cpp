#include <iostream>
#include "include/text.h"
using namespace std;

int main()
{
	setlocale(0, "");
	MyList utext("Васильев А.Н.");
	utext.push_back_current_level("вышел федя погулять");
	utext.push_back_next_level("Покушать хочется");
	utext.push_back_next_level("На улице солнечно");
	utext.push_back_current_level("Улитка покорительцница миров");
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

