#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
int n;

void bit(int x){
    for(int i = 0; i < n; ++i)
        if(x & (1 << i))
            cout << i << " ";
}

int main (){

    cout << "Please enter the number of elements.\n";
    cin >> n;

    for(int i = 0; i < (1 << n); ++i){
        bit(i);
        cout << endl;
    }

}