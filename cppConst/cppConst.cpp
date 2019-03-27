#include <iostream>

const int i=5;

int main()
{
    /*int j = 1;
    int k = j+i;//*/
   
    const int val01 = 1;
    int* pval01 = (int*)&val01;
    *pval01 = 2;
    return 0;
}
