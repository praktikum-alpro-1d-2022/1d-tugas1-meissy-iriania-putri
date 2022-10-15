#include<iostream>
using namespace std;
int main() {
    int x=4, y=8, temp;
    //pertukaran yang tidak memakai variabel sementara
    cout << "Nilai Awal x=" << x << "dan y=" << y << endl;
    x = x+y;
    y = x-y;
    x = x-y;
    cout << "Setelah Ditukar x=" << x << " dan y=" << y << endl;
    return 0;

}
