#include <iostream>
#include <vector>

using namespace std;

int main() {
	int edge, i, j;
	int all_leaves = 0;
	cin >> edge;
	int A[edge][edge] = {};
	vector<int> leaves;
	
	for(int k = 1; k <= edge-1; k++){
		cin >> i >> j;
		A[i-1][j-1] = 1;
		A[j-1][i-1] = 1;
	}
	
	for(i = 0; i <= edge-1; i++){
		int suma = 0;
		for(j = 0; j <= edge-1; j++){
			suma += A[i][j];
		}
		if(suma == 1){	
			leaves.push_back(i + 1);
			all_leaves++;
		}
	}
	
	cout << endl;
	cout << all_leaves << endl;
	for(i = 0; i < all_leaves; i++){
		cout << leaves[i] << " ";
	}
	
	return 0;
}
