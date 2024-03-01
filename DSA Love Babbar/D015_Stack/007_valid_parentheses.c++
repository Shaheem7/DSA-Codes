// #include<iostream>
// using namespace std;

// #include<stack>

// bool isValid(string s){
//    // open bracket --> s.push
//          stack<char> st;

//     for (int i = 0; i < s.length(); i++)
//     {
//         char ch = s[i];

//         // close bracket --> check & then pop

//         if (ch == '{'|| ch == '[' || ch == '(' )
//         {
//             st.push(ch);
//         }
//         else 
//         {
//             if (!s.empty())
//             {
//                 char top = st.top();
//                 if (ch =='}' && top == '{'|| ch == ']' && top == '[' || ch = ')' && top == '(')
//                 {
//                     st.pop();
//                 }
//                 else return false;
//             }
//             else return false;
//         }
//     }
//     if (st.empty())
//     {
//         return true;
//     }
//     else return false;
        
    
    


// }



// int main(){


//     return 0;
// }