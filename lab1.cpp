#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int Pryam(int a, int b){
string wfind;
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
return 0;
}
int main(){
    setlocale(LC_ALL, "Russian");
string figura;
cout << "Выберите фигуру (p-прямоугольник): ";
cin >> figura;
if (figura=="p"){
    int a, b;
    cout <<"Введите стороны прямоугольника: ";
    cin >> a >> b;
    Pryam(a, b);
return 0;
}
}