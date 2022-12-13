
#include "lib.h"
using namespace std;
float maxarray(float num[], int a){
      float b=1;
      for ( int j=0;j<n;j++){
          if(j==0){
              b=num[j];
          } else if (num[j]>b){
              b=num[j];
          }
      }
      return b;
      }

