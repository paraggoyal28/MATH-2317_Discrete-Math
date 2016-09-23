#include <iostream>
using namespace std;

string op3(string a, int b){
    string s = "";
    if(b > 7)
        s += a + "^" + a + "^" + a + ".....(" + b + " times)" + ".....^" + a;
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
        s += op3(a, a) + "\n------\n...\n(" + b + " times)\n...\n------\n" + op3(a, a);
    else{
        for(int i = 0; i < b-1; ++i)
            s += op3(a, a) + "\n---------\n";
        s += op3(a, a);
    }
    return s;
}

string op5(string a, int b){
    string s = "";
    if(b > 7)
        s += op4(a, a) + "\n******************************************\n.\n.\n.\n(" + b + " times)\n.\n.\n.\n******************************************\n" + op4(a, a);
    else{
        for(int i = 0; i < b-1; ++i)
            s += op4(a, a) + "\n******************************************\n";
        s += op4(a, a);
    }
    return s;
}

int main (){
    int b, c; // 5 op5 4 op5 3
    while(s == "="){
        cin >> s;
        s_ar[]
    }
    string a; cin >> a >> b >> c; // Choice - op5/op4/op3 - integers
    if      (a == "op3"){ cout << op3(b, c) << endl; }
    else if (a == "op4"){ cout << op4(b, c) << endl; }  // Just calling the functions
    else if (a == "op5"){ cout << op5(b, c) << endl; }
    else                { cout << "Error: Invalid entry!" << endl; }
	return 0;
}