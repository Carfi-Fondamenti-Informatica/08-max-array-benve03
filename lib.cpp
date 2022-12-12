
#include "lib.h"
using namespace std;
float array(float array[], int n){
      float b;
      for ( int j=0;j<n;j++){
          if(j==0){
              b=array[j];
          } else if (array[j]>b){
              b=array[j];
          }
      }
      return b;
      }
