#include <iostream>
#include<cmath>
using namespace std;
int FM(char v[], int N1)
   {
    int Q; int menu , i;
    cout<<"1 para pitangas\n";
    cout<<"2 para cerejas\n";
    cout<<"3 para guabirobas\n";
    cout<<"\t";
    cin>>menu;
      switch(menu)
      {
      case 1:
    Q=0;
      for(i=0;i<N1;i++)
      {
      if(v[i]=='p')
      {
    Q=Q+1;
      }
        }
      break;
      case 2:
      Q=0;
      for(i=0;i<N1;i++)
      {
          if(v[i]=='c')
      {
          Q=Q+1;
      }
      }
      break;
      case 3:
      Q=0;
      for(i=0;i<N1;i++)
      {
          if(v[i]=='g')
          {
              Q=Q+1;
          }
      }
      break;
      default:cout<<"opção ivalida\n";
    }
      return Q;
    }
      int main()
    {
     int n=0, m=0, I,J,Q;
     int linha=0;
     while(n<=0)
     {
       cout<<"ingresse a quantidade de colunas que deseja\n";
       cin>>n;
     }
     while(m<=0)
     {
         cout<<"ingresse a quantidade de colunas que deseja por\n";
         cin>>m;
     }
     char POM[n][m];
     char vl[m];
     for(I=0;I<n;I++)
     {
         for(J=0;J<n;J++)
         {
             cout<<"ingresse o componente "<<I+1<<J+1<<"\n";
             cin>>POM[I][J];
         }
     }
    cout<<"\n";
    cout<<"ingresse o numero da linha\n";
    cin>>linha;
    linha=linha-1;
    cout<<"\n";
    for(I=0;I<n;I++)
    {
        vl[I]=POM[linha][I];
    }
    Q=FM(vl,m);
    cout<<Q;
    
    return 0;
    }

