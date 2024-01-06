#include<iostream>
using namespace std;

int getlength(char name[]){
    int count = 0;
    
    while (name[count]!='\0')
    {
        count++;
    }
    return count;
}

void reverse_string(char name[]){

    int len = getlength(name);

    for (int i = 0; i < len/2; i++)
    {
        swap(name[i],name[len-i]);
    }

    for (int i = 0; i < len; i++)
    {
        cout << name[i];
        
    }
    

    // int start = 0;
    // int end = len-1;

    // while (start<end)
    // {
    //     char temp = name[start];
    //     name[start] = name[end];
    //     name[end] = temp;

    //     start++;
    //     end--;
    // }
    

}

int main(){


    // char name[20] = "Hello";

    char name[20];

    cout << "Enter your name: ";
    cin >> name;

    cout << name << endl;

    cout << "Length of name is: " << getlength(name) << endl;

    cout << "Reversed Name is : "<< name << endl;
    reverse_string(name);

     



}