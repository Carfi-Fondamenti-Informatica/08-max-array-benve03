#include "lib.h"

float maxArray (float num[] , int d) {
    for (int i = 0; i < d; i++) {
        if (num[0] < num[i]) {
            num[0] = num[i];
        }
    }
    return num[0];


