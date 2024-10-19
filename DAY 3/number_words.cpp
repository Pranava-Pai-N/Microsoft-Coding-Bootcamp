#include<iostream>
using namespace std;

// Function to reverse the number
int rev(int num) {
    int reverse = 0;
    while(num > 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    return reverse;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
     if(number==0)
     {
        cout<<"Zero"<<endl;
     }
     int x = rev(number);
    while(x >0) {
        int digit = x % 10;
        switch(digit) {
            case 0: cout << "Zero "; break;
            case 1: cout << "One "; break;
            case 2: cout << "Two "; break;
            case 3: cout << "Three "; break;
            case 4: cout << "Four "; break;
            case 5: cout << "Five "; break;
            case 6: cout << "Six "; break;
            case 7: cout << "Seven "; break;
            case 8: cout << "Eight "; break;
            case 9: cout << "Nine "; break;
        }
        x /= 10;
    }
   
    cout << endl;
    return 0;
}
