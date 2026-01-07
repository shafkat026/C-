// ===============================
//  Escape Sequences in C++
// ===============================

#include<iostream>
using namespace std;

int main(){

//	\n 	New line	
	cout << "Hello World!" << "\n";
	cout << "Hello World!" << endl;
	cout << "I am learning C++ \n";

	
//	\t	Creates a horizontal tab
	cout << "A \t B";
	
//	Inserts a backslash character (\)	
	cout << "\\";

// \"  ? Double quote
    cout << "\"Hello\""; 

// \b  ? Backspace (removes previous character)
    cout << "AB\bC"; 
    

// \r  ? Carriage return (moves cursor to start of line)
    cout << "Hello\rWorld"; 
    
// \a  ? Alert / Bell sound (if system supports)
//  cout << "\a"; 
    
// \f  ? Form feed (page break, rarely used)
    cout << "Text\fPage2";

// \v  ? Vertical tab (rarely used)
    cout << "A\vB" << endl;



    // Example combining escape sequences

    // Let's print a formatted line:
    cout << "Name\t:\tShafkat\n";
    cout << "ID\t:\t2301026" << endl ;
    cout << "Quote\t:\v\"Work Hard, \f Stay Humble!\"\n";

    return 0;
}

