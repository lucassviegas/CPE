#include<iomanip>
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int a, b;
    for(a=1; a<=5; a++){
        cout<<"a tabuada de "<<a<<"\n";
        for(b=1;b<=10;b++){
            cout<<a<<"*"<<b<<"="<<a*b;
        }
    }
   

    return 0;
}
