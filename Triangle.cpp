#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;

    cout << "Введите стороны a, b, c: ";
    cin >> a >> b >> c;

    // Сумма двух сторон должна быть больше третьей
    if (a + b > c && a + c > b && b + c > a) {
        
        // Периметр
        double P = a + b + c;
        cout << "Периметр: " << P << endl;

        // Площадь по Герону
        double p = P / 2; // полупериметр
        double S = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << "Площадь: " << S << endl;

        // Проверка на равнобедренность
        if (a == b || b == c || a == c) {
            cout << "Треугольник равнобедренный" << endl;
        } else {
            cout << "Треугольник не равнобедренный" << endl;
        }

    } else {
        cout << "Ошибка! Такой треугольник не существует" << endl;
    }

    return 0;
}
//comment