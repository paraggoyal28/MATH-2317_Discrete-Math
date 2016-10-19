#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

void bit(int x){
    for(int i = 0; i < n; ++i)
        if(x & (1 << i))
            cout << i << " ";
}

int main (){

    int n, size;
    cout << "Please enter the number of elements.\n";
    cin >> n;

    for(int i = 0; i < power(2,n); ++i){
        bit(i);
        cout << endl;
    }

}