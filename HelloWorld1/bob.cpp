#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib> //for rand 
#include <ctime> // to get time elapsed since jan 1970
#include <random>
#include <vector>
#include <numeric>

#include <boost/program_options.hpp>
;

namespace po = boost::program_options;

std::string sayHello()
{
	return "Hello, bob!";
}

//Naming Conventions
int file_size{}; // Snake Case
int FileSize{}; // Pascal Case
int fileSize{}; // Camel Case
int iFileSize{}; // Hungarian Notation -- not relevant anymore, i for int

void circlecalculator()
{
	const double pi = 3.14159265359;
	std::cout << "Enter the radius of a Circle: ";
	double radius{};
	std::cin >> radius;
	double area = pi * pow(radius, 2);
	std::cout << "the area of the circle is: " << area << " units^2" << "\n";
}

void diceroll()
{
	std::string dicerollagain{};
	do {
		
		std::random_device generator;
		std::uniform_int_distribution<int> distribution(1, 6);
		int die_1 = distribution(generator);  // generates number in the range 1..6 
		int die_2 = distribution(generator);  // generates number in the range 1..6 

		std::cout << die_1 << ", " << die_2 << "\n";
		std::cout << "Roll Again?" << "\n" << "Please enter 'yes' or 'no'" << "\n";
		std::string dicerollagain{};
		std::cin >> dicerollagain;
		}
	while (dicerollagain == "yes");

}

void customdiceroll()
{
	int diefaces{};
	int NumberOfDice{};
	int howmanydicerolled(0);

	std::cout << "Enter the amount of faces you want per die" << "\n";
	std::cin >> diefaces;
	if (diefaces == 0) {
		std::cout << "You Cannot Enter 0";
	}
	else{
		std::cout << "you have chosen " << diefaces << " faces" << "\n" << "Enter the amount of dice you wish to roll" << "\n";
		std::cin >> NumberOfDice;
		if (NumberOfDice == 0) {
			std::cout << "You Cannot Enter 0";
		}
		else {
std::cout << "you have chosen " << NumberOfDice << " dice" << "\n";

	std::vector<int> DiceRollResults;
		std::cout << "\n" << "***Roll Results***" << "\n" << "\n";
		do {
			std::random_device CustomGenerator;
			std::uniform_int_distribution<int> CustomDistribution(1, diefaces);
			int DiceRoll = CustomDistribution(CustomGenerator);
			std::cout << DiceRoll << "\n";
			DiceRollResults.push_back(static_cast<double>(DiceRoll));
			howmanydicerolled++;
		} 
		while (howmanydicerolled < NumberOfDice);

		double DiceSum = std::accumulate(DiceRollResults.begin(), DiceRollResults.end(), 0.0);
		double DiceAverage = DiceSum / DiceRollResults.size();
		std::cout << "\n" << "***Insights***" << "\n" << "average roll = " << DiceAverage << "\n" << "total rolled = " << DiceSum;
		}
		
	}
	

	

}

void taxcalculator()
{
	std::cout << "insert annual sales :";
	double sales{};
	std::cin >> sales;
	const double state_tax_rate = 0.04;
	const double county_tax_rate = 0.02;

	double state_tax = sales * state_tax_rate;
	double county_tax = sales * county_tax_rate;

	double total_tax = state_tax + county_tax;

	double net_sales = sales - total_tax;

	std::cout << "total sales = $" << sales << "\n";
	std::cout << "state tax = $" << state_tax << "\n";
	std::cout << "county tax = $" << county_tax << "\n";
	std::cout << "total tax = $" << total_tax << "\n";
	std::cout << "net sales = $" << net_sales << "\n";
}

void temperatureconverter()
{
	std::cout << "Enter temperature (degrees F): ";

	double temperature_fahrenheit;
	std::cin >> temperature_fahrenheit;
	double temperature_celsius = (temperature_fahrenheit - 32) / 1.8;
	std::cout << temperature_celsius << "degrees C" << "\n";
}

void helloworld()
	{
	std::cout << sayHello() << "\n" << "Hello again!" << "\n";
	}


void additioncaclulator()
{
	double num1{}, num2{};
	std::cout << "Enter first number: ";
	std::cin >> num1;

	std::cout << "Enter second number: ";
	std::cin >> num2;

	std::cout << "result: " << num1 + num2 << "\n";
}

int main(int argc, char** argv)
{
	
	// options selector
	po::options_description desc("Available options");
	desc.add_options()
		("help", "produce help message")
		("calculators", "offers a set of calculators for a variety of uses")
		("diceroll", "outputs the results of a roll of pair of dice")
		("customdiceroll", "outputs the result of a customised roll of dice")
		("temperatureconvertor", "converts temperatures from fahrenheit to celcius")
		("helloworld", "prints hello world");

	po::variables_map vm;
	po::store(po::parse_command_line(argc, argv, desc), vm);
	po::notify(vm);

	if (vm.count("calculators")) {
		po::options_description calculators_desc("avaliable calculators");
		calculators_desc.add_options()
			("circlecalculator", "calculates the area of a circle from its radius")
			("taxcalculator", "calculates the state and county tax on annual sales")
			("additioncalculator", "calculates the sum of two doubles");
	}

	if (vm.count("circlecalculator")){
		circlecalculator();
	}

	if (vm.count("diceroll")) {
		diceroll();
	}

	if (vm.count("customdiceroll")){
		customdiceroll();
	}

	if (vm.count("taxcalculator")) {
		taxcalculator();
	}

	if (vm.count("temperatureconvertor")) {
		temperatureconverter();
	}

	if (vm.count("helloworld")) {
		helloworld();
	}

	if (vm.count("additioncalculator")) {
		additioncaclulator();
	}

	if (vm.count("help")) {
		std::cout << desc << "/n";
	}
	int x = 1;
	int y = 7;

	double a = 10;
	int b = 3;

	int A = 10;
	int B = 3;

	// How to swap the two variables???
	std::swap(x, y);

	// mathematical expressions

	int z = x + y;
	

	// using double for floating point since 10/3 results in decimal

	double c = a / b;
	

	// OR use modulus (%) to find remainder of division

	int C = A % B;
	

	// increment and decrement

	int X = 10;
	int Q = 10;

	int Y = X++; // X = 11, Y = 10 **changes Y to X, then adds one to X
	int Z = ++Q; // Q = 11, Z = 11 **adds one to Q, then changes Z to Q




	

	double e = 10;
	double f = 5;

	double g = (e + 10) / (3 * f);

	// want to print g = 1.3333

	

	// data types and initialising variables

	double price = 9.99;
	float interest_rate = 3.67f; //must have an f following a float or else the compiler will treat this like a double
	long file_size_2 = 900000L; //same as float, but needs an L so the compiler can tell between int, double, and long
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

	

	//prints 16960 rather than 1,000,000, can also use {} to prevent code from compiling with narrowed variable
	//going from short to int will not change variable value however

// generating random numbers


	srand(time(nullptr)); // alters the random number, by a fixed amount each time program runs
	int random = rand() % 10; // will create a random number, but that number will be the same every time the program runs
	// modulus will give remainder of division by 10, i.e. only 0-9, limiting the size of random number



	return 0;


}

