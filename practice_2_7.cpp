#include <iostream>
using namespace std;
void print1();
void print2();
void celsiusToFahrenheit();
void lightYearsToAstronomicalUnits();
void printTime(int hours, int minutes);

void printTime(int hours, int minutes) {
  cout << "Time: " << hours << ":" << minutes << endl;
}

void lightYearsToAstronomicalUnits() {
  int years;
  cout << "Enter the number of light years: " << endl;
  cin >> years;
  cout << years << " light years = " << (years * 63240.0) << " astronomical units." << endl;
}

void celsiusToFahrenheit() {
  int degrees;
  cout << "Plaese enter a celsius value: " << endl;
  cin >> degrees;
  cout << degrees << " degrees Celsius is " << (1.8 * degrees + 32) << " degrees Fahrenheit." << endl;
}


void print1() {
  cout << "Three blind mice" << endl;
}

void print2() {
  cout << "See how they run" << endl;
}

int main() {
  //2.7.1
  cout << "your name" << endl; 
  cout << "your address" << endl; 
  //2.7.2
  long l;
  cout << "input distance" << endl;
  cin >> l;
  cout << "result:" << (l * 220) << endl;
  //2.7.3
  print1();
  print1();
  print2();
  print2();
  //2.7.4
  cout << "Enter your age:";
  int age;
  cin >> age;
  cout << "Mounth: " << (age * 12) << endl;
  cout << "Enter the number of hours:";
  int hours;
  cin >> hours;
  cout << "Enter the number of minutes:";
  int minutes;
  cin >> minutes;
  cout << "Times:" << hours << ":" << minutes << endl;
  //2.7.5
  celsiusToFahrenheit(); 
  //2.7.6
  lightYearsToAstronomicalUnits();
  //2.7.7
  cout << "Enter the number of hours: ";
  cin >> hours;
  cout << "Enter the number of minutes: ";
  cin >> minutes;
  printTime(hours, minutes);
  return 0;
}
