#include <bits/stdc++.h>
using namespace std;
// ---ARITHMATIC OPERATON--- START
void addition(long long a, long long b){
    cout << "Addition of " << a << " and " << b << " is " << a + b;
}void subtraction(long a, long b){
    cout << "Subtraction of " << a << " and " << b << " is " << a - b;
}void multiplication(long a, long b){
    cout << "Multiplication of " << a << " and " << b << " is " << a * b;
}void division(long long a, long long b){
    cout << "Division of " << a << " and " << b << " is " << fixed << setprecision(4) << (double)a / (double)b;
}void module(long long a, long long b){
    cout << "Module of " << a << " and " << b << " is " << a % b;
}
void arithmatic(){
    cout << "*****ARITHMATIC OPERATION*****\n";
    cout << "Please choose what arithmatic operation you want to do:\n";
    cout << "Enter ->\n";
    cout << "(1) -> Addition\n";
    cout << "(2) -> Subtraction\n";
    cout << "(3) -> Multiplication\n";
    cout << "(4) -> Division\n";
    cout << "(5) -> Module\n";
    int op;
    cin >> op;
    cout << "Enter your two numbers a and b ->\n";
    long long a, b;
    cin >> a >> b;
    if(op == 1){
        addition(a, b);
    }else if(op == 2){
        subtraction(a, b);
    }else if(op == 3){
        multiplication(a, b);
    }else if(op == 4){
        division(a, b);
    }else if(op == 5){
        module(a, b);
    }
}
// ---ARITHMATIC OPERATION--- END

// ---TRIGONOMETRIC OPERATION--- START      
void trigonometric(){
    cout << "*****TRIGONOMETRIC OPERATION*****\n";
    cout << "Please choose what trigonometric operation you want to do:\n";
    cout << "Enter ->\n";
    cout << "(1) -> Calculate sin\n";
    cout << "(2) -> Calculate cos\n";
    cout << "(3) -> Calculate tan\n";
    cout << "(4) -> Calculate cosec\n";
    cout << "(5) -> Calculate sec\n";
    cout << "(6) -> Calculate cot\n";
    int angle;
    cin >> angle;
    cout << "Enter your degree ->\n";
    double deg;
    cin >> deg;
    double pi = 3.1415926535;
    double radian = deg * (pi / 180);
    if(angle == 1){
        double result = sin(radian);
        cout << "sin of " << deg << " is " << result;
    }else if(angle == 2){
        double result = cos(radian);
        cout << "cos of " << deg << " is " << result;
    }else if(angle == 3){
        double result = tan(radian);
        cout << "tan of " << deg << " is " << result;
    }else if(angle == 4){
        double result = 1 / sin(radian);
        cout << "cosec of " << deg << " is " << result;
    }else if(angle == 5){
        double result = 1 / cos(radian);
        cout << "sec of " << deg << " is " << result;
    }else if(angle == 6){
        double result = 1 / tan(radian);
        cout << "cot of " << deg << " is " << result;
    }
// ---TRIGONOMETRIC OPERATION--- END

// ---LOGARITHMIC OPERATION--- START 
void logarithmic(){
    cout << "HI.";
}
}
int main()
{   
    cout << "*****CALCULATOR*****\n";
    cout << "Please choose what operation you want to do:\n";
    cout << "Enter ->\n";
    cout << "(1) -> Arithmatic Operation\n";
    cout << "(2) -> Trigonometric Operation\n";
    cout << "(3) -> Logarithmic Operation\n";
    cout << "(4) -> Power Operation\n";
    int operation;
    cin >> operation;

    if(operation == 1){
        arithmatic();
    }else if(operation == 2){
        trigonometric();
    }else if(operation == 3){
        logarithmic();
    }
    
    return 0;
}