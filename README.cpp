lude<iostream>
using namespace std;

int main() {
int choice;
int num1, num2;

cout << "1. Multiplication" << endl;
cout << "2. Addition" << endl;
cout << "3. Substraction" << endl;
cout << "4. Division" << endl;
cout << "5. Modulus" << endl;
cin >> choice;

switch(choice){
case 1:
cout << "Enter two numbers you would like to Multiple" << endl;
cin >> num1, num2;
cout << "Multiplication: " <<num1*num2<< endl;
break;

case 2:
cout << "Enter two numbers you would like to add" << endl;
cin >> num1, num2;
cout << "Addition: " <<num1+num2<< endl;
break;

case 3:
cout << "Enter two numbers you would like to substrate" << endl;
cin >> num1, num2;
cout << "Substraction: " <<num1-num2<< endl;
break;

case 4:
cout << "Enter two numbers you would like to divide" << endl;
cin >> num1, num2;
cout << "Division: " <<num1/num2<< endl;
break;

case 5:
cout << "Enter two numbers you would like to Modulus" << endl;
cin >> num1;
cin>> num2;
cout << "Modulus:  " <<num1%num2<< endl;
break;

default:
cout << "You have entered a wrong input. Check for error" << endl;
break;
}

 return 0;
}
  
