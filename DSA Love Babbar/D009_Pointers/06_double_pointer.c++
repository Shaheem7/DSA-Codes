#include<iostream>
using namespace std;

void update(int **p2) {
    //p2 = p2 + 1;
    //kuch change hoga  - NO

    //*p2 = *p2 + 1;
    //kuch change hoga - YES

    **p2 = **p2 + 1;
    //kuch change hoga - YES
}

void update(int *p){
    *p = (*p)  *  2;
}

void increment(int **p){
    ++(**p);
}


int main(){



    int i = 5;
    int* p = &i;
    int** p2 = &p;

    cout<< endl << endl <<" Sab sahi chal rha h " << endl << endl ;

    // Output = value of i
    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;

    // Output = address of i
    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;

    // Output = address of p
    cout << &p << endl;
    cout << p2 << endl;

    cout << endl << endl;
    cout<< "before " << i << endl;
    cout<< "before " << p << endl;
    cout<< "before " << p2 << endl;
    update(p2);
    cout<< "after " << i << endl;
    cout<< "after " << p << endl;
    cout<< "after " << p2 << endl;
    cout << endl << endl;
    return 0;


    // p[2] = *(p+2)    in case of array


}