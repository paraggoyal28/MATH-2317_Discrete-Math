#include <iostream>
#include <vector>
#include <string>
#define pb push_back
using namespace std;
string op4(string a, int b){
    string s = "";
    if(b > 5)
        s += a + "^" + a + "^" + a + ".....(" + to_string(b) + " times)" + ".....^" + a;
    else{
        for (int i = 0 ; i < b-1 ; ++i)
            s += a + "^";
        s += a;
    }
    return s;
}

string op5(string a, int b){
    string s = "";
    if(b > 5)
        s += op4(a, stoi(a)) + "\n------\n...\n(" + to_string(b) + " times)\n...\n------\n" + op4(a, stoi(a));
    else{
        for(int i = 0; i < b-1; ++i)
            s += op4(a, stoi(a)) + "\n---------\n";
        s += op4(a, stoi(a));
    }
    return s;
}

int main (){
    int b, c;
    vector<string> svc;
    string s = "";
    while(s != "="){
        cin >> s;
        svc.pb(s);
    }
    string str;
    str = svc[0];
    for (int it = 1; it < svc.size() ; it+=2) {
        if (svc[it] == "op4"){ str = op4(str , stoi(svc[it+1])); }
        else if (svc[it] == "op5"){ str = op5(str, stoi(svc[it+1])); }
        else;
    }
    cout << str << endl;
    
}