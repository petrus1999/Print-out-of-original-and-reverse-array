// Print out of original and reverse array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main(){

    int myNum[6]{ 12,16,20,23,30,40 };
    int sum = 0;
    cout << " The original array numbers are: " << endl;
    for (int i = 0;i < 6;i++) {
        cout << myNum[i] << " ";
        sum += myNum[i];
    
    }
    cout << endl;
    cout << "The sum is equals to " << sum << endl;
    cout << " The reverse of the array numbers are : " << endl;
    for (int i = 6 - 1;i >= 0;i--) {
        cout << myNum[i] << " ";
    }
    return 0;
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
