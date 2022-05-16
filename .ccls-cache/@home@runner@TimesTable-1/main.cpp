#include <iostream>
using namespace std;

int main() 
{

int num, x;

cout << "What times table do you want : ";
cin >> num;

for ( x = 1; x <= 10; x++) {
cout << num << " * " << x << " = "  << num*x <<"\n";
}
}

