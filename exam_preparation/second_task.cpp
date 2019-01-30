#include<iostream>

using namespace std;

#define MAX_SIZE 100

bool char_contained(char char_array[], char symbol){

	for(int i = 0; i < MAX_SIZE; i++) {
		if(symbol == char_array[i]) {
			return true;
		} 
	}

	return false;
}


bool contained_once(char char_array[], char symbol){

	int times_met = 0;
	for(int i = 0; i < MAX_SIZE; i++) {
		if(symbol == char_array[i]) {
			times_met++;
		} 
	}

	if(times_met == 1) return true;

	return false;
}

void stripduplicates(char *s){
	char duplicated_string[MAX_SIZE] = { '\0' };

	for(int i = 0, duplicated_counter = 0; s[i] != '\0'; i++) {

		if(!(contained_once(s, s[i]))) {
			duplicated_string[duplicated_counter] = s[i];
			duplicated_counter++;
		}

       /*if(!(char_contained(duplicated_string, s[i]) )) {
			duplicated_string[duplicated_counter] = s[i];
			duplicated_counter++;
		}*/
	}

	/*for(int j = 0; duplicated_string[j] != '\0'; j++) {
		
	}*/

	cout << duplicated_string << endl;
}



int main(){

	char s[MAX_SIZE] = "he loves cats and dogs";
	stripduplicates(s);
	
	return 0;
}
