#include <iostream>
int main()
{
  using namespace std;
  double *p3 = new double[3];
  p3[0] = 1.0;
  p3[1] = 2.0;
  p3[2] = 3.0;
  cout << "p3[0] is " << p3[0] << endl; 
  cout << "p3[1] is " << p3[1] << endl; 
  cout << "p3[2] is " << p3[2] << endl; 

  p3 = p3 + 1;
  cout << "Now p3[0] is " << p3[0] << endl;
  cout << "Now p3[1] is " << p3[1] << endl;

  p3 = p3 - 1;
  delete [] p3;

  return 0;
}
