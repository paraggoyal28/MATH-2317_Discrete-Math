#include <iostream>     // std::cout
#include <algorithm>    // std::next_permutation, std::sort
#include <map>
#include <vector>
#define pb  push_back
using namespace std;
map< string, int> checking;
vector<string> vc;

int main () {
    string myints = "IIIIMPPSSSS";
    
    do {
        if (!checking[myints]){
            checking[myints] = 1;
            vc.pb(myints);
        }
    } while (next_permutation(myints.begin(), myints.end()));
    
    sort(vc.begin(),vc.end());
    int count = 1;
    for (vector<string>::iterator it = vc.begin(); it != vc.end(); ++it) {
        cout << count++ << "\t" << *it << endl;
    }
    
    return 0;
}