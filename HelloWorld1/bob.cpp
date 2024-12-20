#include <iostream>
#include <string>
#include <cmath>
#include <math.h>

#define M_PI 3.14159265358979323846;

using namespace std;

string sayHello()
{
    return "Hello, bob!";
}

//Naming Conventions
int file_size; // Snake Case
int FileSize; // Pascal Case
int fileSize; // Camel Case
int iFileSize; // Hungarian Notation -- not relevant anymore, i for int

int main()
{
    cout << sayHello() << "\n" << "Hello again!" << "\n";

    int x = 1;
    int y = 7;

    double a = 10;
    int b = 3;

    int A = 10;
    int B = 3;
    
    // How to swap the two variables???
        swap(x, y);

    // mathematical expressions

            int z = x + y;
            cout << z << "\n";

        // using double for floating point since 10/3 results in decimal

            double c = a / b;
            cout << c << "\n";

        // OR use modulus (%) to find remainder of division

            int C = A % B;
            cout << C << "\n";

        // increment and decrement

            int X = 10;
            int Q = 10;

            int Y = X++; // X = 11, Y = 10 **changes Y to X, then adds one to X
            int Z = ++Q; // Q = 11, Z = 11 **adds one to Q, then changes Z to Q

        cout << X << Y << Z << Q << "\n";


    // Mathematical expressions excercise

            double e = 10;
            double f = 5;

            double g = (e + 10) / (3 * f);
     
            // want to print g = 1.3333

                 cout << "g = " << g << "\n";

    //tax exercise

                 double sales = 95000;
                 const double state_tax_rate = 0.04;
                 const double county_tax_rate = 0.02;

                 double state_tax = sales * state_tax_rate;
                 double county_tax = sales * county_tax_rate;

                 double total_tax = state_tax + county_tax;

                 double net_sales = sales - total_tax;

                 cout << "total sales = $" << sales << "\n";
                 cout << "state tax = $" << state_tax << "\n";
                 cout << "county tax = $" << county_tax << "\n";
                 cout << "total tax = $" << total_tax << "\n";
                 cout << "net sales = $" << net_sales << "\n";

    // reading from the console
                 cout << "Enter a value: ";
                     int value;
                     cin >> value;
                     cout << value << endl;


               double num1, num2;
                 cout << "Enter first number: ";
                     cin >> num1;

                     cout << "Enter second number: ";
                     cin >> num2;

                     cout << "result: " << num1 + num2 << "\n";

            //converting farenheit to celsius using cin

                     cout << "Enter temperature (degrees F): ";

                     double temperature_fahrenheit;
                     cin >> temperature_fahrenheit;
                     double temperature_celsius = (temperature_fahrenheit - 32) / 1.8;
                     cout << temperature_celsius << "degrees C";

        // more maths practice - circle calculator

                     const double pi = M_PI;
                     cout << "Enter the radius of a Circle: ";
                     double radius;
                     cin >> radius;
                     double area = pi * pow(radius, 2);\
                     cout << area;
    return 0;

 
}
