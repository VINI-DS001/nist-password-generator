#include<bits/stdc++.h>

using namespace std;

int main(){
	char ascTblChars[127];
	
	for (int c=32; c < 127; c++) {
    ascTblChars[c] = (char) (c);
	}
	
	int string_length = sizeof(ascTblChars)-1;
	
	int len;
    cout<<"Enter the length of password:";
    cin>>len;
    
    while(len<8 || len>64){
    	cout << "\nPasswords must be between 8 and 64 characters long.\n" << endl;
    	cout << "Try again: ";
    	cin >> len;
	}
    
    srand(time(0));
    cout<<"Generated password:";
    for(int i = 0; i < len; i++)
    cout << ascTblChars[rand() % string_length];
	
	return 0;
}