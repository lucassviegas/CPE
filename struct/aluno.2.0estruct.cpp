#include <iostream>

using namespace std;
struct endereco
{
        char cidade [15];
      char rua[15
     int casa;
};
struct aluno{
          int matricula;
       float nota;
    endereco e;
};


int main()
{
         const int n=3;
      aluno a[n];
    for(i-0;i<n;i++)
    {
        cout<<"ingresse a matricula do aluno"<<i+1<<"n";
           cin>>a[i].matricula;
             cout<<"ingresse a nota do aluno"<<i+1<<"n";
              cin>>a[i].nota;
                cout<<"ingresse a cidade do aluno"<<i+1<<"n";
                  cin>>a[i].e.cidade;
            cout<<"ingresse a rua do aluno"<<i+1<<"n";
          cin>>a[i].e.rua;
       cout<<"ingresse o numero da casa do aluno"<<i+1<<"n";
          cin>>a[i].e.casa;
     }
     for(i=0; i<n;i++)
     {
          cout<<"o aluno" <<i+1<<"possui os seguintes dados\n";
          cout<<a[i].matricula<<"\n";
           cout<<a[i].nota<<"\n";
            cout<<a[i].e.cidade<<"\n";
             cout<<a[i].e.rua<<"\n";
              cout<<a[i].e.casa<<"\n";
     }
   
   
   
    return 0;
}