#include <cmath>
#include <iostream>

using namespace std;
float hipotenusa(int cateto1, int cateto2);
float area(int b, int H);

int main()
   {
    int a, b;
    float hipotenus=0;
    float ar=0;
    cout<<"insira o cateto 1 por gentileza:";
    cin>>a;
    cout<<"insira o cateto 2 por gentileza:";
    cin>>b;
    hipotenus=hipotenusa(a,b);
    ar=area(a,b);
    cout<<"a hipotenusa deste trianguloe: "<<hipotenus<<endl<<"e a area de triangulo e "<<ar<<endl;
    return 0;
   }
float hipotenusa(int cateto1, int cateto2)
   {
    float H;
    H=cateto1+cateto2*cateto2;
    H=sqrt(H);
    return H;
    }
float area(int b, int H)
{
    float area;
    area=b*H/2;
    return area;
}
