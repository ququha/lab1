#include <iostream>
#include <cmath>
#include <clocale>

setlocale(LC_CTYPE, "rus");
int Pryam(int a, int b){
string wfind;
cin >> "Что вы хотите найти? p - периметр, s - площадь, d - диагональ " >> wfind;
if (wfind=="p"){
cout << a+b << endl;
}
if (wfind=="s"){
cout << a*b << endl;
}
if (wfind=="d"){
cout << (sqrt(a*a+b*b)) << endl;
}
if (wfind!="p"||wfind!="s"||wfind!="d"){
cout << "Невозможно вычислить" << endl;
}
}
int main(){
string figura;
cin >> "Vyberite figuru: " >> figura;
if (figura=="Прямоугольник"){
int a, b;
cin >> "Введите стороны прямоугольника:  " >> a >> b;
Pryam(a, b);
}