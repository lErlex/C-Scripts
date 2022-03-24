#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>
#include <string.h>

using namespace std;

int randomized(){
	int rnum = 65 + rand()%(90-65);
	return rnum;
}

int main() {
	srand((unsigned)time(0));
	
	int caracters;
	string name = "", random = "";
	
	cout << "Cuantos caracteres quieres ";
	cin >> caracters;
	
	for(int i = 0; i < 10; i++){
		for(int i = 0; i < caracters; i++){
			random = randomized();
			name = name + random;
		}
		cout << name << endl;
		name = "";
	}
	return 0; 
}
