#include<iostream>
using namespace std;


int score = 100;       /// Global vaiable   -bad practice(bcoz anyone can func can change it)
// other method = using reference variable 

void b(){
    cout << score << endl;

}

int main(){


    int i = 10;

    // Local variable 
    {
        int i = 5;
        cout << i << endl;
    }

    cout << i << endl;

    b;
    cout << score << endl;

    return 0;
}