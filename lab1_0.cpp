#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;
string wfind;

int pryam(int a, int b){
        cout << "Что нужно найти: ";
        cin >> wfind;
        if (wfind=="p"){
        cout << a+b << endl;
        }
        if (wfind=="s"){
        cout << a*b << endl;
        }
        if (wfind=="d"){
        cout << (sqrt(a*a+b*b)) << endl;
        }
        else {
        cout << "Невозможно вычислить" << endl;
        }
}


int trap(int a, int b, int h){
    cout << "Что нужно найти (Площадь s, периметр p, длина средней линии z): ";
    cin >> wfind;
    if (wfind=="s"){
        cout << (a+b)*h/2 << endl;
    }
    if (wfind=="p"){
        cout << "Введите боковые стороны: ";
        int c, d;
        cin >> c >> d;
        cout << a+b+c+d << endl;
    }
    if (wfind=="z"){
        cout << (a+b)/2 << endl;
    }
    else {
        cout << "Невозможно вычислить";
    }
}
int main(){
    setlocale(LC_ALL, "Russian");
    int a, b, h;
    string figura, x;

    cout << "Выберите фигуру (p-прямоугольник, t-трапеция) : ";
    cin >> figura;
    if (figura=="p"){
    for (int i=0, n=1; i<n; i++, n++){
        cout <<"Введите стороны прямоугольника: ";
        cin >> a >> b;

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
