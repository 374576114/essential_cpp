/*
 * learn the C++ exception
 */
#include <iostream>
#include <exception>
using namespace std;
/*
 * 异常类，继承基类exception
 */
class MyException: exception
{
	public:
		const char* what() const throw()
		{
			return "C++ Exception";
		}
};

/*
 * 异常函数，0异常
 */
double division(int x, int y)
{
	if(y == 0){
		throw MyException();
	}else{
		return 1.0*x/y;
	}
}

int main()
{
	int x=5, y=0;
	double z=0.0;

	try{
		z = division(x, y);
	}catch(MyException& e){
		cout<<e.what()<<endl;
	}

	return 0;
}

