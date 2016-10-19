#include <iostream>
#include <set>
#include <cmath>
using namespace std;

int main (){

    set<int> rnd;
    while(rnd.size() < 6)
        rnd.insert(rand() % 40 +1);
    
    cout << "Here is the 6 element random set from 1 to 40:\n";
    for (set<int>::iterator i = rnd.begin(); i != rnd.end(); ++i)
        cout << *i << " ";
    cout << endl;

}