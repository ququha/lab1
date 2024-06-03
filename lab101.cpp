#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int pryam(int a, int b){
        cout << "Периметр: " << a+b << endl;
        cout << "Площадь: " << a*b << endl;
        cout << "Диагональ: " << (sqrt(a*a+b*b)) << endl;
}


int trap(int a, int b, int h){
        cout << "Площадь: " << (a+b)*h/2 << endl;
        cout << "Введите боковые стороны: ";
        int c, d;
        cin >> c >> d;
        if (c <= h || d <= h) {
            cout << "Ошибка" << endl;
            return 0;
        }
        cout << "Периметр: " << a+b+c+d << endl;
        cout << "Средняя линия: " << (a+b)/2 << endl;
}
int main(){
    setlocale(LC_ALL, "Russian");
    int a, b, h;
    string figura, x;
    cout << "Выберите фигуру (p-прямоугольник, t-трапеция) : ";
    cin >> figura;
    if (figura=="p"){
    for (int i=0, n=1; i<n; i++, n++){
        cout <<                 "Введите стороны прямоугольника: ";
        cin >> a >> b;
        if (a < 0 || b < 0) {
            cout << "Ошибка";
            return 0;
        }
        pryam(a, b);
        cout << "Хотите продолжить? (y/n) ";
        cin >> x;
        if (x=="y"){
            continue;
            }
        if (x=="n"){
            break;
            }
        }
    }
    if (figura=="t"){
        for (int i=0, n=1; i<n; i++, n++){
        cout << "Введите основания и высоту трапеции: ";
        cin >> a >> b >> h;
        if (a < 0 || b < 0 || h < 0) {
            cout << "Ошибка";
            return 0;
        }
        trap(a, b, h);
        cout << "Хотите продолжить? (y/n) ";
        cin >> x;
        if (x=="y"){
            continue;
            }
        if (x=="n"){
            break;
            }
        }
    }
}
cout << "git";