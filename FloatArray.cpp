// Midterm Resubmission.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

class FloatArray {
private:
	int size;
	float* array = NULL;
public:
	//Constructor to accept an int and store it 
	FloatArray(int s) {
		size = s;
		array = new float[s];
		std::cout << "Constructed" << std::endl;
	}

	//Deconstructor
	~FloatArray() {
		//gets rid of the array
		delete[] array;
		array = NULL;
		std::cout << "Deconstructed" << std::endl;

	}

	//Member Functions
	void storeValue(float value, int index) {
		array[index] = value;
	}

	float getValue(int index) {
		return array[index];
	}

	float getHighestValue() {
		float highest = array[0];
		for (int x = 1; x < size; x++) {
			if (array[x] > highest) {
				highest = array[x];
			}
		}
		return highest;
	}

	float getLowestValue() {
		float lowest = array[0];
		for (int x = 1; x < size; x++) {
			if (array[x] < lowest) {
				lowest = array[x];
			}
		}
		return lowest;
	}

	int getSize() {
		return size;
	}
};

int main() {
	FloatArray arr(3);
	arr.storeValue(10, 0);
	arr.storeValue(15, 1);
	arr.storeValue(23, 2);

	std::cout << "Value at 0: "<<arr.getValue(0) << std::endl;
	std::cout << "High Value: "<<arr.getHighestValue() << std::endl;
	std::cout <<"Low Value:"<< arr.getLowestValue() << std::endl;

	//C++ / Visual studio automatically calls the deconstructor
	//This can be seen in the output
	//arr.~FloatArray();
	
}
