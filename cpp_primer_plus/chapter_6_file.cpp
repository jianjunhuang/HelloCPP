#include <iostream>
#include <fstream>

int main()
{
  using namespace std;
  ofstream outFile;
  outFile.open("test.txt");
  outFile << "testtesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttest" << endl;
  outFile << "testtesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttest" << endl;
  outFile << "testtesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttest" << endl;
  outFile << "testtesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttest" << endl;
  outFile.close();

  ifstream inFile;
  inFile.open("test.txt");
  char ch[10];
  while (inFile.good()) {
    inFile.getline(ch, 10); //if length < real size return inFile.fail() == true
    cout << ch << endl;
  }

  if (inFile.eof()) {
    cout << "EOF" << endl;
  } else if (inFile.fail()) {
    cout << "FAIL" << endl;
  }
  inFile.close();

  return 0;
}
 
