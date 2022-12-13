#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    int n=0;
    cout<<"inserisci la dimensione dell'array"<<endl;
    cin>>n;
    float maxarray[n];
    float x;
    for (int i=0;i<n;i++){
        cout<<"inserisci x.........x"<<endl;
        cin>>x;
        maxarray[i]=x;
    }
    return 0;
}
