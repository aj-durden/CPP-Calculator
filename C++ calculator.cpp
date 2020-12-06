//This is a simple calculator made in C++
#include<string>
#include<iostream>

int main()
{
	int choice;
	double first, second, sum;

	std::cout << "Hello! Welcome to my calculator in C++! Please make a selection below!\n";
	std::cout << "0. Quit\n" << "1. Addition\n" << "2. Subtraction\n" << "3. Multiplication\n" << "4. Division\n";
	std::cin >> choice;

	switch (choice)
	{
	//Case 0 will return Goodbye becuase the user is finished with the program
	case 0:
		std::cout << "Goodbye!";
	//Case 1 will perform simple addition
	case 1:
		std::cout << "Hello! please enter the first number you would like to add! ";
		std::cin >> first;

		std::cout << "Hello!please enter the second number you would like to add! ";
		std::cin >> second;

		sum = first + second;
		std::cout << "The total sum is equal to " << sum;
	//Case 2 will perform simple subtraction
	case 2:
		std::cout << "Hello! please enter the first number you would like to subtract! ";
		std::cin >> first;

		std::cout << "Hello!please enter the second number you would like to subtract! ";
		std::cin >> second;

		sum = first - second;
		std::cout << "The total sum is equal to " << sum;
	//Case 3 will perform simple muptiplication
	case 3:
		std::cout << "Hello! please enter the first number you would like to multiply! ";
		std::cin >> first;

		std::cout << "Hello!please enter the second number you would like to multiply! ";
		std::cin >> second;

		sum = first * second;
		std::cout << "The total sum is equal to " << sum;
	//Case 4 will perform simple division
	case 4:
		std::cout << "Hello! please enter the first number you would like to divide! ";
		std::cin >> first;

		std::cout << "Hello!please enter the second number you would like to divide! ";
		std::cin >> second;

		sum = first / second;
		std::cout << "The total sum is equal to " << sum;
	}
}