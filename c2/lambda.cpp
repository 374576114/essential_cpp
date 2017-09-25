/*
 * learn the lambda.cpp
 * NOTE: you maybe will use the 
 *   '-std=c++11' to compile 
 *   the c++ file to use the
 *   c++11 features
 */
#include <iostream>
using namespace std;

int main()
{
    int loc_a = 10;

    cout<<"the stack a="<<loc_a<<endl;

    // lambda function
    // []()->return_type{};
    // >>[a, &b] 值传递a，引用传递b
    //   a read only, b can be changed
    // >>() the arguments to lambda function

    auto f = [&loc_a](void)
    {
	cout<<"the f a="<<loc_a<<endl;
	loc_a ++;
	cout<<"the f a++ ="<<loc_a<<endl;
    };
    f();
    cout<<"the stack a="<<loc_a<<endl;

    return 0;
}

