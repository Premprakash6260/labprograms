#include <bits/stdc++.h>

using namespace std;

int ip[] = {2,6,3,1,4,8,5,7};

int main(){
	int p[8],k[10];
	cout << "Enter 8-bit plain text: ";
	for(int i=0; i <8; i++)
		cin >> p[i];
	cout << "\n Enter 10-bit key: ";
	for(int i=0; i <10; i++)
		cin >> k[i];
	//initial permutation
	int ip1[8];
	for(int i : ip)
		cout << i;
	cout << endl;
	
}