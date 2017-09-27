/*
 * learn the cast of C++
 *
 * static_cast
 * const_cast
 * dynamic_cast
 * reinterpret_cast
 *
 */
#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	float b = 0;

	// static_cast: 
	//  就是正常情况下的类型转换
	
	b = static_cast<float> (a);
	cout<<a<<"  "<<b<<endl;

	// const_cast:
	//  用于去除const属性
	//  const int *f(int, int){}
	//  int *p = const_cast<int *>(fun(2,3))

	// dynamic_cast:
	//  该操作符用于运行时检查该转换是否类型安全，
	//  但只在多态类型时合法，即该类至少具有一个虚拟方法
	//  类似于static_cast，但是主要用于类之间的转换
	//  包括上行与下行转换，还有类之间的交叉转换
	
	// reinterpret_cast
	// 即重新解释，用于整数与指针之间的转换
	long int i;
	const char *ptr = "hello world";
	i = reinterpret_cast<long int> (ptr);
	cout<<i<<endl;

	return 0;
}
