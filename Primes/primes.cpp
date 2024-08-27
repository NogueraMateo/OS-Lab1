#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
* Determines if a number is prime
*/
int is_prime( int n ) {
    if ( n <= 1 ) return 0;
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

/*
* Reads an input from the user
*/
string read( string prompt ) {
    cout << prompt << " ";
    string aux;
    getline(cin, aux);
    return aux;
}



int main() {
    string aux;
    int number, option; 
    
    do {
        cout << "1. Determine a prime number." << endl
         << "2. Input a list of numbers." << endl
         << "3. Input a numeric range. \n--> ";
    
        getline(cin, aux);
        option = stoi(aux);

        switch (option)
        {
        case 1:
            number = stoi(read("Enter a number:"));
            if (is_prime(number)) {
                cout << "The number " << number << " is prime." << endl;
            }
            else { 
                cout << "The number " << number << " is not prime" << endl;
            }
            break;
        
        case 2: {
            int size = stoi(read("Enter the size of the list: "));
            vector<int> args( size );
            
            for (int i = 0; i < size; ++i) {
                args[i] = stoi(read(to_string(i+1) + ". Enter a number: "));
            }

            cout << "The prime numbers within that list of numbers are: " << endl;
            
            for (int i = 0; i < size; ++i) {
                if (is_prime(args[i])) {
                    cout << args[i] << " ";
                }
            }

            cout << endl;
            break;
        }   
        
        case 3: {
            int begin = stoi(read("Enter the start number: "));
            int stop = stoi(read("Enter the stop number (exclusive): "));

            cout << "The prime numbers within that range of numbers are: " << endl;

            for (int i = begin; i < stop; ++i) {
                if (is_prime(i))
                    cout << i << " ";
            }
            cout << endl;
            break;
        }

        default:
            break;
        }
    } while (option != 0);
    
}