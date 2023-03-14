#include<bits/stdc++.h>
using namespace std;

	int modulo(int a, int b) {
	    return ((a % b) + b) % b;
	}
	
	int powerMod(int a, int b, int m) {
    int res = 1;
    a = a % m;
    while (b > 0) {
        if (b & 1) {
            res = (res * a) % m;
        }
        b = b >> 1;
        a = (a * a) % m;
    }
    return modulo(res, m);
}

int main () {
	
	
int a = 15;
int b = 16;
int m = 17;

int result = powerMod(a, b, m);

cout << "Ket qua: " << result << endl;

	
}



