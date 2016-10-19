#include <iostream>
#include <set>
#include <cmath>
#include <stdlib.h>
#include <cstring>
using namespace std;

bool issubset (set<int> a){
	int j = 0;
	int setB[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
	for(set<int>::iterator it = a.begin(); it != a.end(); ++it)
		for(int i = 0; i < 12; ++i)
			if(*it == setB[i])
				j++;
	if(j == a.size()) return true;
	else return false;
}

int main (){

    set<int> rnd;
    srand(time(NULL));
    while(rnd.size() < 6) rnd.insert(rand() % 40 +1);
    
    cout << "Here is the 6 element random set from 1 to 40:\n";
    for (set<int>::iterator i = rnd.begin(); i != rnd.end(); ++i)
        cout << *i << " ";
    cout << endl;
    if(issubset(rnd))
    	cout << "This set is subset of B\n";
    else
    	cout << "This set is not a subset of B\n";

}