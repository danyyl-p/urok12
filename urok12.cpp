#include <iostream>
#include<windows.h>
#include<string>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int choice;
    cout << "Выберите задачу:\n";
    cout << "1. Проверить квадрат или прямоугольник\n";
    cout << "2. Проверить тип треугольника\n";
    cout << "Введите номер: ";
    cin >> choice;

    if (choice == 1) {
        int a, b;
        cout << "Введите длину первой стороны: ";
        cin >> a;
        cout << "Введите длину второй стороны: ";
        cin >> b;
        cout << (a == b ? "Это квадрат.\n" : "Это прямоугольник.\n");
    }
    else if (choice == 2) {
        int a, b, c;
        cout << "Введите длины трех сторон треугольника: ";
        cin >> a >> b >> c;
        cout << (a == b && b == c ? "Треугольник равносторонний.\n" :
            (a == b || b == c || a == c ? "Треугольник равнобедренный.\n" :
                "Треугольник разносторонний.\n"));
    }
    else {
        cout << "Неверный выбор.\n";
    }

    return 0;
}
