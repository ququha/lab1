#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int pryam(int a, int b){
        cout << "��������: " << a+b << endl;
        cout <<"�������: " << a*b << endl;
        cout << "���������: " << (sqrt(a*a+b*b)) << endl;
}


int trap(int a, int b, int h){
        cout <<" �������: " << (a+b)*h/2 << endl;
        cout << "������� ������� �������: ";
        int c, d;
        cin >> c >> d;
        cout << "��������: " << a+b+c+d << endl;
        cout <<"������� �����: " << (a+b)/2 << endl;
}
int main(){
    setlocale(LC_ALL, "Russian");
    int a, b, h;
    string figura, x;
    cout << "�������� ������ (p-�������������, t-��������) : ";
    cin >> figura;
    if (figura=="p"){
    for (int i=0, n=1; i<n; i++, n++){
        cout <<"������� ������� ��������������: ";
        cin >> a >> b;
        pryam(a, b);
        cout << "������ ����������? (y/n) ";
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
        cout << "������� ��������� � ������ ��������: ";
        cin >> a >> b >> h;
        trap(a, b, h);
        cout << "������ ����������? (y/n) ";
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