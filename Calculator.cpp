#include <iostream>
using namespace std;

int main() {
int x,y,z,h;
cout << "Choose a whole number: ";
cin >> x;
cout << "Choose another whole number: ";
cin >> y;
cout << "Choose operation: +(1)    -(2)    /(3)    *(4)  " << endl;
cin >> z;
if(z == 1){
    cout << x+y << endl;
    cout << "Type any number to exit" << endl;
    cin >> h;
    return 0;
}
if(z==2){
    cout << x-y << endl;
    cout << "Type any number to exit" << endl;
    cin >> h;
    return 0;
}
if(z==3){
    cout << x/y << endl;
    cout << "Type any number to exit" << endl;
    cin >> h;
    return 0;
}
if(z==4){
    cout << "Your result is " << x*y << endl;
    cout << "Type any number to exit" << endl;
    cin >> h;
    return 0;
}
return 0;
}

