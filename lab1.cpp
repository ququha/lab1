#include <iostream>
#include <cmath>
#include <clocale>

int Pryam(int a, int b){
string wfind;
cin >> wfind >> endl;
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
cout << "Nevozmozhno vychislit" << endl;
}
}
int main(){
string figura;
cin >> "Vyberite figuru: " >> figura;
if (figura=="Pryamougolnik"){
int a, b;
cin >> "Vvedite storony: " >> a >> b;
Pryam(a, b);
}