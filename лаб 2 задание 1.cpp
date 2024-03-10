#include <iostream>
#include <fstream>
using namespace std;
int main() {
    std::ifstream file("a.txt");
    if (!file.is_open()) {
        std::cout << "Не удалось открыть файл a.txt" << std::endl;
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

    std::cout << "Количество положительных элементов: " << countPositive << std::endl;
    std::cout << "Сумма положительных элементов: " << sumPositive << std::endl;

    return 0;
}

