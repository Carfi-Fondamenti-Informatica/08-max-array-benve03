#include <iostream>
#include "lib.h"
using namespace std;

int main() {
int d = 0 ;
cin >> d ;
float num[d] ;
for (int i=0 ; i<d ; i++) {
    cin >> num[i] ;
}
cout << maxArray( num  , d) << endl;
    return 0;
}
