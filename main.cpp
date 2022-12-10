#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int n;
    cin >> n;
    float valori[n];
    for (int i=0; i<n; i++){
        cin >> valori[i];
    }
    cout << grandeValore(valori,n);
    return 0;
}
