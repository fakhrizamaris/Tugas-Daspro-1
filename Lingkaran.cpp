#include <iostream>

using namespace std;

int main(){

  double a,t;
  float Luas;

  cout<<"Program Menghitung Luas Segitiga"<< endl;
  cout<<"================================"<< endl;
  cout<<"\nMasukkan alas          = "; cin>>a;
  cout<<"Masukkan tinggi        = "; cin>>t;

  Luas=(a*t)/2;
  cout<<"Hasil Luas Segitiga    = "<<Luas;


  return 0;
}