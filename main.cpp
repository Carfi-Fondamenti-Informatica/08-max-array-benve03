#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    int n=0;
    cout<<"inserisci la dimensione dell'array"<<endl;
    cin>>n;
    float num[n];
    float x;
    for (int i=0;i<n;i++){
        cout<<"inserisci x.........x"<<endl;
        cin>>num[i];
    }
    cout<<maxarray( num, n)<<endl;
    return 0;
}
