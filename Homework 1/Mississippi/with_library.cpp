#include <iostream>     // std::cout
#include <algorithm>    // std::next_permutation, std::sort
#include <map>
#include <vector>
#define pb  push_back
using namespace std;
map< string, int> checking;
vector<string> vc;

int main () {
    string myStr;
    cin >> myStr;
    
    do {
        if (!checking[myStr]){
            checking[myStr] = 1;
            vc.pb(myStr);
        }
    } while (next_permutation(myStr.begin(), myStr.end()));
    
    sort(vc.begin(),vc.end());
    int count = 1;
    for (vector<string>::iterator it = vc.begin(); it != vc.end(); ++it) {
        cout << count++ << "\t" << *it << endl;
    }
    
    return 0;
}