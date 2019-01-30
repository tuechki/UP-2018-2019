#include<iostream>

using namespace std;

#define MAX_SIZE 100
int main(){


	char char_array[MAX_SIZE];

	cin.getline(char_array, MAX_SIZE);

	cout << char_array << endl;

	int numbers = 0;

	for(int counter = 0; counter < MAX_SIZE; counter++){

		if(char_array[counter] >= '0' && char_array[counter] <= '9'){
			numbers++;
			while(char_array[counter] >= '0' && char_array[counter] <= '9'){
				counter++;
			}
		} 

		
	}

	
	cout << numbers << endl;
	
	return 0;
}
