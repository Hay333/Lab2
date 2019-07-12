#include <iostream>
using namespace std;

int main()
{
	int chislo, summa=0;
	while (cin >> chislo) {
		if (chislo==0) {
			cout << "Число ровно нулю. Вывод суммы.";
			break;
		} else {
			if(chislo > 0) {
				summa=summa+chislo;
			} else {
				cout << "Было введено отрицательное число или нечисловое знаечние. Оно не будет суммироваться"<<endl;
				
			}
		}
	}

		cout << "Сумма равна:";
		cout << summa << endl;

	return 0;
}
