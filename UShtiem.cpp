#include<iostream>
using namespace std;



/*Write a program that searches an array of real numbers (double) for the first positive
element.
● Write a function search(double v[], int n) that accepts an array of doubles and
its length as parameters.
● The function loops through the array and returns the first positive element it finds.
● If the loop ends and no positive element is found, the function should return -1.0.*/

double search(double arr[], int n) {
	double kount = -1.0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			cout << "Numri i pare pozitive eshte : " << arr[i];
			break;
		}
		else {
			cout <<"Pasi vargu nuk ka vlera pozitive athere : " <<  kount;
		}
	}
	
}

int main() {
	const int m = 7;
	double arr[m] = { 12,-5,14,5.6,7,8,-5 };



	cout << search(arr, m);
	
}









