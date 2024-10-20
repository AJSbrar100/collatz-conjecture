#include <iostream>
#include <vector>//used for vector(for the sequence list

using namespace std;
	
int main() {

  //initialize the number, and asks for user input 
	unsigned long long number; 
	cout << "Enter the number: ";
	cin >> number;
	cout << endl;

  //initilize the array to be use to store the sequence numbers
	vector<int> arr;

  //initialize the variable for stopping time
	int stopping_time = 0;

  //this loop would run while the number would not be 1
	while (number != 1) {
		stopping_time++;//increments the stopping time by one 
		if (number % 2 == 0) { //if the number is even, divide by 2, and append into the array
			number /= 2;
			arr.push_back(number);
		}
		else { //if the number is odd, multiply by 3 and add 1(3n +1), and append into the array
			number = number * 3 + 1;
			arr.push_back(number);
		}
	}

  
	for (int x : arr) { //print all the values in the sequence array
		cout << x << endl;
	}

	cout << "Stopping time - " << stopping_time;//print the stopping time

	return 0;
}
