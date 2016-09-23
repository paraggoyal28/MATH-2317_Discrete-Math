#include <iostream>
#include <vector>
#include <string>
#define pb push_back
using namespace std;

string op3(string a, int b){
    string s = "";
    if(b > 7)
        s += a + "^" + a + "^" + a + ".....(" + to_string(b) + " times)" + ".....^" + a;
    else{
        for (int i = 0 ; i < b-1 ; ++i)
            s += a + "^";
        s += a;
    }
    return s;
}

string op4(string a, int b){
    string s = "";
    if(b > 7)
        s += op3(a, stoi(a)) + "\n------\n...\n(" + to_string(b) + " times)\n...\n------\n" + op3(a, stoi(a));
    else{
        for(int i = 0; i < b-1; ++i)
            s += op3(a, stoi(a)) + "\n---------\n";
        s += op3(a, stoi(a));
    }
    return s;
}

string op5(string a, int b){
    string s = "";
    if(b > 7)
        s += op4(a, stoi(a)) + "\n******************************************\n.\n.\n.\n(" + to_string(b) + " times)\n.\n.\n.\n******************************************\n" + op4(a, stoi(a));
    else{
        for(int i = 0; i < b-1; ++i)
            s += op4(a, stoi(a)) + "\n******************************************\n";
        s += op4(a, stoi(a));
    }
    return s;
}

int main (){
    int b, c; // 5 op5 4 op5 3
    vector<string> svc;
    string s = "";
    while(s != "="){
        cin >> s;
        svc.pb(s);
    }
    for (int it = 0; it != svc.size() ; it+=2) {
        int b = stoi(svc[it+1]);
        if      (svc[it] == "op3"){ cout << op3(svc[it-1], b) << endl; }
        else if (svc[it] == "op4"){ cout << op4(svc[it-1], b) << endl; }
        else if (svc[it] == "op5"){ cout << op5(svc[it-1], b) << endl; }
        else                      { cout << "Error: Invalid entry!" << endl; }
    }
    
}