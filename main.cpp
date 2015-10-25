#include <iostream>
#include <cmath>
using namespace std;
int main(void) {
int n;
double a,b;
cout << "Enter first number: ";
cin >> a;
cout << "Enter second number: ";
cin >> b;
cout << "\n" << "Do you want to: \n";
cout << "1. Multiply.\n";
cout << "2. Add.\n";
cout << "3. Subtract.\n";
cout << "4. Divide.\n";
cout << "5. Square root.\n";
cout << "6. Percentage.\n";
cout << "7. Exit.\n\n";
cin >> n;
switch(n) {
case 1: {
cout << "\n" << "Answer: " << a*b << ".";
break; }
case 2: {
cout << "\n" << "Answer: " << a+b << ".";
break; }
case 3: {
cout << "\n" << "Answer: " << a-b << ".";
break; }
case 4: {
cout << "\n" << "Answer: " << a/b << ".";
break;
case 5: {
cout << "\n" << "Answer: " << sqrt(a) << " and " << sqrt(b) << ".";
break; }
case 6: {
cout << "\n" << "Answer: " << (a*b)/100 << ".";
break; }
case 7: {
break; }
}
}
}
