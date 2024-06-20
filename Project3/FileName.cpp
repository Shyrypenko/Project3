#include <iostream>
#include <string>
using namespace std;

int main() {
    string lines[] = { "y = 2x + 3", "y = 0x + 5", "x = 4", "y = -3" };

    for (const string& line : lines) {
        if (line.substr(0, 4) == "x = ") {
            cout << line << ": Прямая параллельна оси ординат (Y)";
        }
        else if (line.substr(0, 4) == "y = ") {
            if (line.find('x') == string || line.substr(4, 1) == "0") {
                cout << line << ": Прямая параллельна оси абсцисс (X)";
            }
            else {
                cout << line << ": Прямая не параллельна ни одной оси";
            }
        }
        else {
            cout << line << ": Прямая не параллельна ни одной оси";
        }
    }

    return 0;
    //2

    int n;
    double s, a, c, d;

    cout << "Введите количество товара: ";
    cin >> n;
    cout << "Введите стоимость за штуку: ";
    cin >> s;

    a = n * s;
    if (a >= 300) {
        c = 0.07;
    }
    else if (a >= 200) {
        c = 0.05;
    }
    else if (a >= 100) {
        c = 0.03;
    }
    else {
        cout << "Ошибка";
    }
    double s = a * c;
    d = a - s;
    cout << "Общая стоимость: " << a << " грн\n";
    cout << "Сумма скидки: " << s << " грн\n";
    cout << "Итоговая стоимость: " << d << " грн\n";

    return 0;
    //3

    double number;
    cout << "Введите число: ";
    cin >> number;

    if (static_cast<int>(number) == number) {
         cout << "Число не имеет вещественной части";
        }
    else {
         cout << "Число имеет вещественную часть";
        }

    return 0;
    //4

    int l;

    if (l == 1) {
        cout << "Понедельник";
    }
    else if (l == 2) {
        cout << "Вторник";
    }
    else if (l == 3) {
        cout << "Среда";
    }
    else if (l == 4) {
        cout << "Четверг";
    }
    else if (l == 5) {
        cout << "Пятница";
    }
    else if (l == 6) {
        cout << "Суббота";
    }
    else if (l == 7) {
        cout << "Воскресенье";
    }
    else {
        cout << "Ошибка";
    }

    return 0;
    //5

    double x, y;

    if (x < 0, y > 0) {
        cout << "Точка во второй четверти";
    }
    else if (x > 0, y > 0) {
        cout << "Точка в первой четверти";
    }
    else if (x < 0, y < 0) {
        cout << "Точка в третей четверти";
    }
    else if (x > 0, y < 0) {
        cout << "Точка в четвертой четверти";
    }
    else if (x == 0, y == 0) {
        cout << "Точка по центру";
    }
    else if (x == 0, y > 0) {
        cout << "Точка между первой и второй четвертью";
    }
    else if (x == 0, y < 0) {
        cout << "Точка между третей и четвертой четвертью";
    }
    else if (x > 0, y == 0) {
        cout << "Точка между первой и четвертой четвертью";
    }
    else if (x < 0, y == 0) {
        cout << "Точка между второй и третей четвертью";
    }
    else
    {
        cout << "Ошибка";
    }

    return 0;
    //6
 }