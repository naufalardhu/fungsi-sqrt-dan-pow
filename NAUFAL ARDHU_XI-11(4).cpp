#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double x, Akar, Pangkar;
  cout << "Masukan Nilai x: ";
  cin >> x;
  
  Akar = sqrt(x);
  Pangkar = pow(x, 2);
  
cout << "Akar dari " << x << " = " << Akar << endl;
cout <<"Pangkar dari "<< x << " = " <<Pangkar<< endl;

  system ("PAUSE");
  return 0;
}
