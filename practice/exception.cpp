/*
 * learn the C++ exception
 */
#include <iostream>
#include <exception>
using namespace std;
/*
 * �쳣�࣬�̳л���exception
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
 * �쳣������0�쳣
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

