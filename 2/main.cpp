#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
    int a = 40;
    int b = 10;
    int x;
    int m[10];
    srand(time(NULL));
    for (int i = 0;i<10;i++) {
        x= rand()%(a-b+1)+b;
        m[i]= x;
        cout << "random = " << m[i] << endl;
    };
    int *p=&m[10];
    cout << p << endl;
    int* n {&m[4]};
    cout << *n << endl;
    for (int i=0; i<10; i++){
        if (i%2==0){
            cout << "even numbers = " << m[i]<<endl;
        };
    };
    int max, max1, max2, max3, max4, max5, max6, max7, max8, min;
    for (int s = 0; s < 10; ++s) {
        if (m[s] > max) {
            max = m[s];
        };
    }
    for (int d = 0; d < 10; ++d) {
        if ( max > m[d] > max1) {
            max = m[d];
        };
    }
    for (int f = 0; f < 10; ++f) {
        if (max1 > m[f] > max2) {
            max = m[f];
        };
    }
    for (int g = 0; g < 10; ++g) {
        if (max3 > m[g] > max4) {
            max = m[g];
        };
    }
    for (int h = 0; h < 10; ++h) {
        if (max4 > m[h] > max5) {
            max = m[h];
        };
    }
    for (int j = 0; j < 10; ++j) {
        if (max6 > m[j] > max7) {
            max = m[j];
        };
    }
    for (int k = 0; k < 10; ++k) {
        if (max7 > m[k] > max8) {
            max = m[k];
        };
    }
    for (int l = 0; l < 10; ++l) {
        if (max8 > m[l]) {
            min= m[l];
        };
    }
    cout << max << ', ' << max1 << ', ' << max2 << ', ' << max3 << ', ' << max4 << ', ' << max5 << ', ' << max6 << ', ' << max7 << ', ' << max8 << ', ' << min;
    return 0;
}

