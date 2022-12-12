
#include "lib.h"
using namespace std;
float a(float a[], int n){
      float b;
      for ( int j=0;j<n;j++){
          if(j==0){
              b=a[j];
          } else if (a[j]>b){
              b=a[j];
          }
      }
      return b;
      }
