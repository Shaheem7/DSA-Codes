#include<iostream>
using namespace std;

                    // Number & types of notes in a given value 

int main(){

    int n ;
    cin>>n;
    int h_count = n/100;
    int k = n - h_count*100;
    int f_count = k/50;
    int s = k - f_count*50;
    int t_count = s/20;
    int q = s - t_count*20;
    int th_count = q/10;
    int r = q - th_count*10;
    int fi_count = r/5;
    int a = r - fi_count*5;
    int tw_count = a/2;
    int o = a - tw_count*2;
    int o_count = o/1;
    cout<<"Hundreds - "<< h_count << endl;
    cout<<"Fifty - "<< f_count << endl;
    cout<<"Twenty - "<< t_count << endl;
    cout<<"Tens - "<< th_count << endl;
    cout<<"Fives - "<< fi_count << endl;
    cout<<"Twos - "<< tw_count << endl;
    cout<<"Ones - "<< o_count << endl;

     
}