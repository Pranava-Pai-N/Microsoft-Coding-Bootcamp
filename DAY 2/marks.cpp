#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3;
    float avg; 
    char name[100];
    
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter marks in three subjects: ";
    cin >> m1 >> m2 >> m3;
    int total=m1+m2+m3;
    cout<<"Total : "<<total<<endl;
    if (m1<35 ||m2<35 ||m3<35) {
        cout << "Fail." << endl;
        return 1;
    }
    avg = (m1 + m2 + m3) / 3.0; 
    if (m1 < 35 && m2 < 35 && m3 < 35) {
        cout << "Fail" << endl;
    } else if (avg >= 60) {
        cout << "First Class" << endl;
    } else if (avg >= 50) {
        cout << "Second Class" << endl;
    } else if (avg >= 35) {
        cout << "Pass Class" << endl;
    } else {
        cout << "Fail!!" << endl; 
    }

    return 0;
}
