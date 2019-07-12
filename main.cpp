#include <iostream>
using namespace std;

int main()
{
	int peremennaya, iskomoe;
	cout << "Введите искомое число." << endl;
	cin >> iskomoe;
	if (iskomoe==0) {
	cout<< "Ноль не может быть искомым"<<endl;
	}
	else{

	do {
		cout << "Введите число"<< endl;
		cin >> peremennaya;
		if (peremennaya==iskomoe) {
			cout << "Найдено искомое число"<< endl;
		} else if (peremennaya==0) {
			cout << "Возможно вы ввели ноль или не числовое значение" << endl;
			break;
		} else {
			continue;
		}
	} while (peremennaya!=iskomoe);
	}
return 0;
}

