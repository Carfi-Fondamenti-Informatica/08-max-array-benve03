
#include "lib.h"
using namespace std;
float array(float a[], int n){
      float b=1;
      for ( int j=0;j<n;j++){
          if(j==0){
              b=a[j];
          } else if (a[j]>b){
              b=a[j];
          }
      }
      return b;
      }

