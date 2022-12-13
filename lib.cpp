
#include "lib.h"
using namespace std;
float maxarray(float num[], int a){
      float b=1;
      for ( int j=0;j<a;j++){
          if(num[j]>b){
              b=num[j];
          }
      }
      return b;
      }

