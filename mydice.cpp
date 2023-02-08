#include <iostream> // Основная библиотека.
#include <cstdlib> // Для рандома.
#include <ctime> // Для функции time().

using namespace std;

int main () {

	srand (time(NULL)); // Создание истинного рандомама.

	bool throwing = true; // Отвечает за бросок.

	while (throwing == true){ // Пока человек бросает кубики.

		string choose; // Выбор, бросать или нет.

		cout << "Бросить кубики? (д/н)\n";
		cin >> choose; // Ввод выбора.

		if (choose == "нет" || choose =="н"){ // Если не бросать.

			throwing = false;
			break;

		}

		else { // Иначе.

			int first_dice = 0, second_dice = 0; // Первый кубик и второй кубик.

			first_dice = rand()%6; // Рандомизация первого кубика.

			second_dice = rand()%6; // Рандомизация второго кубика.

			first_dice  ++; // Увеличение первого кубика на 1.

			second_dice ++; // Увеличение второго кубика на 1.

			if (first_dice == second_dice){ // Если обе кости равны.

				switch (first_dice){ // Проверка того, что на 1й кости.

					case 1:
						cout << "*\n";
						break;

					case 2:
						cout << "*\n *\n";
						break;

					case 3:
						cout << "*\n *\n  *\n";
						break;

					case 4:
						cout << "* *\n\n* *\n";
						break;

					case 5:
						cout << "* *\n * \n* *\n";
						break;

					case 6:
						cout << "* * *\n\n* * *\n";
						break;

				}

				cout << "#########\n";
			
				switch (second_dice){ // Проверка того, что на 2й кости.

					case 1:
						cout << "*\n";
						break;

					case 2:
						cout << "*\n *\n";
						break;

					case 3:
						cout << "*\n *\n  *\n";
						break;

					case 4:
						cout << "* *\n\n* *\n";
						break;

					case 5:
						cout << "* *\n * \n* *\n";
						break;

					case 6:
						cout << "* * *\n\n* * *\n";
						break;

				}

				cout << "Вам выпал дубль: " << first_dice << " " << second_dice << endl;
				
			}

			else if (first_dice != second_dice){ // Если обе кости не равны.

				switch (first_dice){ // Проверка того, что на 1й кости.

					case 1:
						cout << "*\n";
						break;

					case 2:
						cout << "*\n *\n";
						break;

					case 3:
						cout << "*\n *\n  *\n";
						break;

					case 4:
						cout << "* *\n\n* *\n";
						break;

					case 5:
						cout << "* *\n * \n* *\n";
						break;

					case 6:
						cout << "* * *\n\n* * *\n";
						break;

				}

				cout << "#########\n";
			
				switch (second_dice){ // Проверка того, что на 2й кости.

					case 1:
						cout << "*\n";
						break;

					case 2:
						cout << "*\n *\n";
						break;

					case 3:
						cout << "*\n *\n  *\n";
						break;

					case 4:
						cout << "* *\n\n* *\n";
						break;

					case 5:
						cout << "* *\n * \n* *\n";
						break;

					case 6:
						cout << "* * *\n\n* * *\n";
						break;

				}

				cout << "Вам выпало:  " << first_dice << " " << second_dice << "\n";
			
			}

		}

	}

	return 0;

}
