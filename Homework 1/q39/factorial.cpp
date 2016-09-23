#include <iostream>
using namespace std;
int f(int n){
    return (n == 1 || n == 0) ? 1 : f(n - 1) * n;
}

int main (){
    for (int i = 1; i < 10; ++i)
        for (int j = 0; j < 10; ++j)
            for (int k = 0; k < 10; ++k)
                if(100*i + 10*j + k == f(i) + f(j) + f(k))
                    cout << 100*i + 10*j + k << " " ;
    cout << endl;
}
