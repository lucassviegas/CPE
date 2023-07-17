

#include <iostream>

using namespace std;

int
main ()
{
  int velas;
  int velasN;
  int velasQ;
  int horas;
  cout<<"ingresse a quantidade de velas\n";
  cin>>velas;
  cout<<"quantas velas sao necessarias para outra\n";
  cin>>velasN;
  
  while(velasN<=1)
  {
      cout<<"impossivel fazer isso \n";
      cout<<"ingresse um numero maior que 1\n";
      cin>>velasN;
      
  }
  while (velas>0)
  {
      velas=velas-1;
      horas=horas+1;
      velasQ=velasQ+1;
      if(velasQ==velasN){
          velas=velas+1;
          velasQ=0;
      }
  }
  cout<<"voce tera "<<horas<<"horas de iluminaçao garantida";
  if(horas>2){
      cout<<"jante rapid haja em vista que vai ficar sem luz\n";
  }
  return 0;
}
