#include <iostream>
using namespace std;

int main(){

	int n; // "n" is a whole number
	cin >> n; // You put a value in "n" in order to write in it

	for( int i = 0; i < n; i++ ){  //The code will execute only with this parameters
		for( int j = 0; j < n; j++ ){ //And with this , too
			cout << "*"; //This will write in the console "*"
		}
		cout << endl;
	}
    return 0;

}

/*
5

*****
*****
*****
*****
*/
