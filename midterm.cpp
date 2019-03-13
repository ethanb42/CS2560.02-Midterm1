

#include <iostream>
using namespace std;

class floater {
private:
	float* ptr = NULL;
	float array; //empty uninitalized array of floats
	int size = 0;
public:
	//constructor
	floater(int size) {
		ptr = new float[size];
		this->size = size;
	}
	

	//deconstructor
	~floater() {
		delete [] ptr;
	}
		
	//store a number somewhere in the array
	void storeNumber(int pos, float val) {
		if (pos >= size) {
			//failed
		}
		else {
			(ptr* + pos) = val;
		}

	}
	
	float getNumber(int pos) {
		if (pos >= size) {
			//failed
		}
		else {
			return *ptr + pos;
		}

	}

	float getHighest() {
		float* high = ptr;
		for (int x = 0; x < size; x++) {
			if (*ptr +x > *high) {
				high = ptr;
			}
		}
		return *high ;
	}

	float getSmallest() {
		float* small =ptr;
		for (int x = 0; x < size; x++) {
			if (*ptr + x < *small) {
				small = ptr;
			}
		}
		return *small;
	}

};


