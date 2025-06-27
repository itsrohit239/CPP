#include<iostream>

int main() {
	int* arr = new int[5]; // Allocate memory for an array of 5 integers
// Initialize the array
	for (int i = 0; i<5; ++i) {
		arr[i] = i + 1;
	}
// Print the array elements
	for (int i = 0; i<5; ++i) {
		std::cout << arr[i] <<" "; // Output: 1 2 3 4 5
	}
	std::cout << std::endl;
	delete[] arr; // Deallocate the array memory
return 0;
}

