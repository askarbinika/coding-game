#include <iostream>
#include <stack>

using namespace std;

int main() {

    string s;
    cin >> s;
    stack<char> st;

    for ( auto element: s) {

        if ((element == '{') ||
            (element == '[') ||
            (element == '(')
            )
                st.push(element);

        if ((element == '}') ||
            (element == ']') ||
            (element == ')')
            ){
                if (st.size() == 0) {
                     cout << "false"<<endl;
                     return 0;
                }

                char top = st.top();
                st.pop();

                if ((top == '{') && (element != '}')){
                    cout<< "false"<< endl;
                    return 0;
                }

                if ((top == '[') && (element != ']')){
                    cout<< "false"<< endl;
                    return 0;
                }

                if ((top == '(') && (element != ')')){
                    cout<< "false"<< endl;
                    return 0;
                }







    }
    }


    if (st.empty())
        cout << "true";
        else cout <<"false";




}
