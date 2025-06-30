#include <iostream>
int main()
{

  using namespace std;
  int updates = 6;
  //定义指针
  int * p_updates;
  //初始化指针地址
  p_updates = &updates;

  cout << "values: updates=" << updates;
  cout << ", *p_updates = " << *p_updates << endl;

  cout << "Addresses: &updates = " << &updates;
  cout << ", p_updates = " << p_updates << endl;

  //update value by pointer
  *p_updates = *p_updates + 1;
  cout << "Now updates = " << updates << endl;
  return 0;
}
