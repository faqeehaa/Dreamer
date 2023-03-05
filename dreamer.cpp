#include <iostream>
using namespace std;

class Dreamer{
    int days;
    int hours;
    int mins;
    int sec;

public:
    // default constructor
    Dreamer(){
        days = 0;
        hours = 0;
        mins = 0;
        sec = 0;
    }

    // parametric constructor
    Dreamer(int d, int h, int m, int s){
        days = d;
        hours = h;
        mins = m;
        sec = s;
    }

    // constructor  initialize from seconds
    Dreamer(long s){
        sec = s;
        mins = sec / 60;
        hours = mins / 60;
        days = hours / 24;

        sec %= 60;
        mins %= 60;
        hours %= 24;
    }

     
    void display(){
        cout << days << ":" << hours << ":" << mins << ":" << sec << endl;
    }
};

int main(){
    Dreamer d1; // default constructor
    // display is a function that is used to diplays time in the form of text
    d1.display();

    Dreamer d2(10, 23, 45, 50); // parametric constructor
    d2.display();

    Dreamer d3(123456); // constructor  initialize from seconds
    d3.display();

    return 0;
}
