#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;
string wfind;

int pryam(int a, int b){
        cout << "�� �㦭� ����: ";
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
        cout << "���������� ���᫨��" << endl;
        }
}


int trap(int a, int b, int h){
    cout << "�� �㦭� ���� (���頤� s, ��ਬ��� p, ����� �।��� ����� z): ";
    cin >> wfind;
    if (wfind=="s"){
        cout << (a+b)*h/2 << endl;
    }
    if (wfind=="p"){
        cout << "������ ������ ��஭�: ";
        int c, d;
        cin >> c >> d;
        cout << a+b+c+d << endl;
    }
    if (wfind=="z"){
        cout << (a+b)/2 << endl;
    }
    else {
        cout << "���������� ���᫨��";
    }
}
int main(){
    setlocale(LC_ALL, "Russian");
    int a, b, h;
    string figura, x;

    cout << "�롥�� 䨣��� (p-��אַ㣮�쭨�, t-�࠯���) : ";
    cin >> figura;
    if (figura=="p"){
    for (int i=0, n=1; i<n; i++, n++){
        cout <<"������ ��஭� ��אַ㣮�쭨��: ";
        cin >> a >> b;

        pryam(a, b);
        cout << "���� �த������? (y/n) ";
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
        cout << "������ �᭮����� � ����� �࠯�樨: ";
        cin >> a >> b >> h;
        trap(a, b, h);
        cout << "���� �த������? (y/n) ";
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
