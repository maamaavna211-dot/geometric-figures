#include <iostream>
#include <cmath> // для sqrt()
#include <string>

using namespace std;

double rectanglePerimeter(double length, double width) {
    //if (length <= 0 || width <= 0) {
    //    throw invalid_argument("Длина и ширина должны быть положительными числами");
    //}
    return 2 * (length + width);
}

double rectangleArea(double length, double width) {
    //if (length <= 0 || width <= 0) {
    //    throw invalid_argument("Длина и ширина должны быть положительными числами");
    //}
    return length * width;
}

double rectangleDiagonal(double length, double width) {
    //if (length <= 0 || width <= 0) {
    //    throw invalid_argument("Длина и ширина должны быть положительными числами");
    //}
    return sqrt(length * length + width * width);
}


int main() {
    
    try {
        double a, b;
        
        cout << "Введите длину прямоугольника: ";
        cin >> a;
        
        cout << "Введите ширину прямоугольника: ";
        cin >> b;
        
        cout << "\n==================================\n";
        cout << "Прямоугольник со сторонами:\n";
        cout << "Длина = " << a << "\n";
        cout << "Ширина = " << b << "\n";
        cout << "==================================\n";

        if (a <= 0 || b <= 0) {
            throw invalid_argument("Длина и ширина должны быть положительными числами");
        }
    
        // Вычисляем параметры
        double perimeter = rectanglePerimeter(a, b);
        double area = rectangleArea(a, b);
        double diagonal = rectangleDiagonal(a, b);
        
        // Выводим результаты с точностью до 2 знаков после запятой
        cout.precision(2);
        cout << fixed;
        
        cout << "Периметр: " << perimeter << endl;
        cout << "Площадь: " << area << endl;
        cout << "Диагональ: " << diagonal << endl;
        
    }
    catch (const invalid_argument& e) {
        cerr << "Ошибка: " << e.what() << endl;
        return 1;
    }
    catch (const exception& e) {
        cerr << "Произошла непредвиденная ошибка: " << e.what() << endl;
        return 1;
    }
    
    return 0;
}
