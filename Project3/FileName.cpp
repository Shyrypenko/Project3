#include <iostream>
#include <string>
using namespace std;

int main() {
    string lines[] = { "y = 2x + 3", "y = 0x + 5", "x = 4", "y = -3" };

    for (const string& line : lines) {
        if (line.substr(0, 4) == "x = ") {
            cout << line << ": ������ ����������� ��� ������� (Y)";
        }
        else if (line.substr(0, 4) == "y = ") {
            if (line.find('x') == string || line.substr(4, 1) == "0") {
                cout << line << ": ������ ����������� ��� ������� (X)";
            }
            else {
                cout << line << ": ������ �� ����������� �� ����� ���";
            }
        }
        else {
            cout << line << ": ������ �� ����������� �� ����� ���";
        }
    }

    return 0;
    //2

    int n;
    double s, a, c, d;

    cout << "������� ���������� ������: ";
    cin >> n;
    cout << "������� ��������� �� �����: ";
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
        cout << "������";
    }
    double s = a * c;
    d = a - s;
    cout << "����� ���������: " << a << " ���\n";
    cout << "����� ������: " << s << " ���\n";
    cout << "�������� ���������: " << d << " ���\n";

    return 0;
    //3

    double number;
    cout << "������� �����: ";
    cin >> number;

    if (static_cast<int>(number) == number) {
         cout << "����� �� ����� ������������ �����";
        }
    else {
         cout << "����� ����� ������������ �����";
        }

    return 0;
    //4

    int l;

    if (l == 1) {
        cout << "�����������";
    }
    else if (l == 2) {
        cout << "�������";
    }
    else if (l == 3) {
        cout << "�����";
    }
    else if (l == 4) {
        cout << "�������";
    }
    else if (l == 5) {
        cout << "�������";
    }
    else if (l == 6) {
        cout << "�������";
    }
    else if (l == 7) {
        cout << "�����������";
    }
    else {
        cout << "������";
    }

    return 0;
    //5

    double x, y;

    if (x < 0, y > 0) {
        cout << "����� �� ������ ��������";
    }
    else if (x > 0, y > 0) {
        cout << "����� � ������ ��������";
    }
    else if (x < 0, y < 0) {
        cout << "����� � ������ ��������";
    }
    else if (x > 0, y < 0) {
        cout << "����� � ��������� ��������";
    }
    else if (x == 0, y == 0) {
        cout << "����� �� ������";
    }
    else if (x == 0, y > 0) {
        cout << "����� ����� ������ � ������ ���������";
    }
    else if (x == 0, y < 0) {
        cout << "����� ����� ������ � ��������� ���������";
    }
    else if (x > 0, y == 0) {
        cout << "����� ����� ������ � ��������� ���������";
    }
    else if (x < 0, y == 0) {
        cout << "����� ����� ������ � ������ ���������";
    }
    else
    {
        cout << "������";
    }

    return 0;
    //6
 }