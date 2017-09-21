/*
 * bubble sort
 */
#include <iostream>
#include <vector>

using namespace std;

void display(int );
void display(int num)
{
    cout<<num<<endl;
}

bool swap(int &a, int &b)
{
    if(&a == &b)
        return false;

    int tmp = a;
    a = b;
    b = tmp;

    return true;
}
void print_vec(const vector<int> &vec)
{
    int len = vec.size();

    for(int i=0; i<len; i++){
        cout<<vec[i]<<endl;
    }
}

void bubble_sort(vector<int> &vec)
{
    int len = vec.size();

    for(int i=0; i<len; i++){
        for(int j=0; j<len-i-1; j++){
            if(vec[j] > vec[j+1]){
                swap(vec[j], vec[j+1]);
            }
        }
    }
}

int main()
{
    vector<int> v;
    
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(1);
    v.push_back(7);

    print_vec(v);
    bubble_sort(v);
    cout<<",,,,,,,,,,,,"<<endl;
    print_vec(v);

    display(3);
    return 0;
}

