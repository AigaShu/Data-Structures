#include <iostream>
using namespace std;

int main(){

	int n; // This set "n" as a whole number
	cin >> n; // This  let you set "n" as  parameter. For example: n = 2

	for( int i = 0; i < n; i++ ){ //The program will execute if this parameters are true
		for( int j = 0; j < n; j++ ){ //And this , too
			cout << "*"; //And this will show you the result
		}
		cout << endl;
	}
    return 0; //This finish the app

}

/*
5

*****
*****
*****
*****
*/
