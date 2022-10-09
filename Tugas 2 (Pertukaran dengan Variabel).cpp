#include<iostream>
using namespace std;
int main (){
    int x=4, y=8, temp;
    //pertukaran yang memakai variabel  sementara
    cout << "Nilai Awal x=" << x << "dan y=" << y << endl;
    temp = x;
    x = y;
    y = temp;
    cout << "Nilai Setelah Ditukar X=" << x << " dan y=" << y << endl;
    cout << endl;
    return 0;

}
