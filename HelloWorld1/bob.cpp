#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
#include <cstdlib> //for rand 
#include <ctime> // to get time elapsed since jan 1970

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
                     cout << temperature_celsius << "degrees C" << "\n";

        // more maths practice - circle calculator

                     const double pi = M_PI;
                     cout << "Enter the radius of a Circle: ";
                     double radius;
                     cin >> radius;
                     double area = pi * pow(radius, 2);\
                     cout << area << "\n";


        // data types and initialising variables

                     double price = 9.99;
                     float interest_rate = 3.67f; //must have an f following a float or else the compiler will treat this like a double
                     long file_size = 900000L; //same as float, but needs an L so the compiler can tell between int, double, and long
                     char letter = 'a'; // needs single quotes around it, unlike a string which is double quotes
                     bool is_valid = true;
                     auto distance = 53.2; // auto will guess which variable type to use, which is why it is important to use F, L, single quotes etc;
                     
                     // int number = {1.2};  {} will prevent code from compiling if wrong data is stored, without this it would just output 1 and lose the .2
                     // can also use empty {} to initialise variable to 0;

            // numbers
                     //decimal (base) 10 = digits 0-9
                     //binary (base 2) = digits 0,1
                     //hexidecimal (base 16) = digits 0-9, letters A-F
                        //hexidecimal can represent any colour using just 6 digits

                     int decimal = 255;
                     int binary = 0b11111111;
                     int hexadecimal = 0xFF;

        // narrowing
                     int pre_narrowing = 1'000'000;
                     short post_narrowing = pre_narrowing;

                     cout << post_narrowing << "\n";

                     //prints 16960 rather than 1,000,000, can also use {} to prevent code from compiling with narrowed variable
                     //going from short to int will not change variable value however

        // generating random numbers

                    
                     srand(time(nullptr)); // alters the random number, by a fixed amount each time program runs
                     int random = rand() % 10; // will create a random number, but that number will be the same every time the program runs
                     // modulus will give remainder of division by 10, i.e. only 0-9, limiting the size of random number
                     cout << random << "\n";

                     const short min_value = 1;
                     const short max_value = 6;

                     short die_1 = (rand() % (max_value - min_value + 1)) + min_value;
                     short die_2 = (rand() % (max_value - min_value + 1)) + min_value;
                     cout << die_1 << ", " << die_2;
    return 0;

 
}

