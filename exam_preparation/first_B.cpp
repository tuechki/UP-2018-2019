#include <iostream>

#define MAX_SIZE 100

using namespace std;

int main () {

	char str[MAX_SIZE];
	cin.getline (str, MAX_SIZE);

	int count_of_words = 0;

	for(int i = 0; str[i] != '\0'; i++) {
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
		
			while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
				i++;
			}
			count_of_words++;
		}
    }

	cout << count_of_words << endl;


	return 0;
}
