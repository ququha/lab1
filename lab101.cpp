#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int pryam(int a, int b){
        cout << "��ਬ���: " << a+b << endl;
        cout << "���頤�: " << a*b << endl;
        cout << "���������: " << (sqrt(a*a+b*b)) << endl;
}


int trap(int a, int b, int h){
        cout << "���頤�: " << (a+b)*h/2 << endl;
        cout << "������ ������ ��஭�: ";
        int c, d;
        cin >> c >> d;
        if (c <= h || d <= h) {
            cout << "�訡��" << endl;
            return 0;
        }
        cout << "��ਬ���: " << a+b+c+d << endl;
        cout << "�।��� �����: " << (a+b)/2 << endl;
}
int main(){
    setlocale(LC_ALL, "Russian");
    int a, b, h;
    string figura, x;
    cout << "�롥�� 䨣��� (p-��אַ㣮�쭨�, t-�࠯���) : ";
    cin >> figura;
    if (figura=="p"){
    for (int i=0, n=1; i<n; i++, n++){
        cout <<                 "������ ��஭� ��אַ㣮�쭨��: ";
        cin >> a >> b;
        if (a < 0 || b < 0) {
            cout << "�訡��";
            return 0;
        }
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
        if (a < 0 || b < 0 || h < 0) {
            cout << "�訡��";
            return 0;
        }
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
cout << "git";