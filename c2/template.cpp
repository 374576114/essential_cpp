/*
 * template function learn
 */
#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <typename T>

void display(const string &msg, const vector<T> &v)
{
    cout<<msg<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<' ';
    }
    cout<<endl;
}

int main()
{
    string msg("========");
    vector<int> v(3,10);
    vector<string> s;
    s.push_back("hello");

    display(msg, v);
    display(msg, s);

    return 0;
}


