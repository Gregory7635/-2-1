#include <iostream>
#include <fstream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    ifstream file("a.txt");
    if (!file.is_open()) {
        cout << "Не удалось открыть файл a.txt" << endl;
        return 1;
    }

    double number;
    int countPositive = 0;
    double sumPositive = 0.0;

    while (file >> number) {
        if (number > 0) {
            countPositive++;
            sumPositive += number;
        }
    }

    file.close();

    cout << "Количество положительных элементов: " << countPositive << endl;
    cout << "Сумма положительных элементов: " << sumPositive << endl;

    return 0;
}

