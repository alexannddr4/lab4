#include <iostream>
#include <cmath>
using namespace std;

void task_proc30();

void task_proc16();

void task_int8();

int main()
{
    int menu;
    cout << "Task number: ";
    cin >> menu;
    switch(menu) {  // Вибір завдання за номером
    case 1: task_proc30(); break;
    case 2: task_proc16(); break;
    case 3: task_int8(); break;
    default: cout << "Wrong task! (Only 1-3)" << endl;
    }
    system("pause");
    return 0;
}

void task_proc30()
{
    cout << "Proc 30" << endl;
    double a1, h1, a2, h2, a3, h3;  // Декларація змінних
    // Введення данних
    cout << "Enter base and height of first triangle: ";
    cin >> a1 >> h1;
    cout << "Enter base and height of second triangle: ";
    cin >> a2 >> h2;
    cout << "Enter base and height of third triangle: ";
    cin >> a3 >> h3;
    // Розрахунки за теоремою Піфагора
    double b1 = sqrt((a1 / 2) * (a1 / 2) + h1 * h1);
    cout << "Perimeter of first triangle: " << a1 + 2 * b1 << endl;
    double b2 = sqrt((a2 / 2) * (a2 / 2) + h2 * h2);
    cout << "Perimeter of first triangle: " << a2 + 2 * b2 << endl;
    double b3 = sqrt((a3 / 2) * (a3 / 2) + h3 * h3);
    cout << "Perimeter of first triangle: " << a3 + 2 * b3 << endl;
}

void task_proc16()
{
    double R1, R2, R3, V1, V2, V3, S1, S2, S3;  // Декларація змінних
    const double Pi = 3.14159265; // Декларація константи пі
    cout << "Enter three radiuses: ";
    cin >> R1 >> R2 >> R3;  // Введення данних
    // Розрахунок
    V1 = (4.0 / 3.0) * Pi * pow(R1, 3);
    S1 = 4 * Pi * R1 * R1;
    V2 = (4.0 / 3.0) * Pi * pow(R2, 3);
    S2 = 4 * Pi * R2 * R2;
    V3 = (4.0 / 3.0) * Pi * pow(R3, 3);
    S3 = 4 * Pi * R3 * R3;

    cout << "Bullet1 : V = " << V1 << ", S =" << S1 << endl;
    cout << "Bullet2 : V = " << V2 << ", S =" << S2 << endl;
    cout << "Bullet3 : V = " << V3 << ", S =" << S3 << endl;
}

void task_int8()
{
    cout << "Integer 8" << endl;
    int number; // Декларація змінної
    cout << "Enter two-digit number: " << endl;
    cin >> number; // Введення данних
    // Розрахунок
    int a = number % 10; // Знаходження десяток
    int b = number / 10; // Знаходження одиниць
    // Результат
    int result = a * 10 + b;
    // Вивидення результату
    cout << "Result: " << result << endl;
}
