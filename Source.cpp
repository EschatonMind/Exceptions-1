#include <iostream>
using namespace std;

void ThingsMightGoWrong() {

	bool Error = true;
	bool Error2 = true;

	if (Error) {
		throw 8; // we use throw to " throw an Error of type X out of the " Exception Function "
	}

	if (Error2) {
		throw string("BlueBerry");   // we use throw to " throw an Error of type X out of the " Exception Function "
	}
}

int main() {

	int a;
	cout << " Enter a: " << endl;
	cin >> a;
	int s = 3*a;
	if (s % 2 != 0) {
		// In order to use " Exceptions " We need to use ->> try {
		//														some code ( mainly calling the proper fucntion);
		//												   }
		//		
		//												   catch (the var type){
		//                                                      do some work ;
		//                                                 }     
		try {
			ThingsMightGoWrong();
		}

		catch (int e) {
			cout << "Error Code is: " << e << endl;
		}
		
		try {
		ThingsMightGoWrong();
		}
			catch (string& e) {
				// inorder to throw an Error of type class object we need a ref of the variable " &X " 
			cout << "Error Code is: " << e << endl;
		}
	
	}
	else {
		cout << s + 1 << endl;
	}
	return 0;
}