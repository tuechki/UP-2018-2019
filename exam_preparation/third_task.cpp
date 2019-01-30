#include<iostream>
#include <string.h>

using namespace std;

#define MAX_SIZE 100
int main(){

	int n;
	cin >> n;
	cin.ignore();

	char strings[50][101];
	for(int i = 0; i < n; i++) {
		cin.getline(strings[i], 101);
	}

	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {

			if(strlen(strings[i]) > strlen(strings[j])) {
				char str[101];
				strcpy(str, strings[i]);
				strcpy(strings[i], strings[j]);
				strcpy(strings[j], str);
			}


			/*if(strcmp(strings[i], strings[j]) > 0) {
				char str[101];
				strcpy(str, strings[i]);
				strcpy(strings[i], strings[j]);
				strcpy(strings[j], str);

			}*/
		}
	}


	for(int i = 0; i < n; i++) {
		cout << strings[i] << endl;
	}

	
	return 0;
}
