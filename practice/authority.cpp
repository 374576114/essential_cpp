/*
 * 测试权限
 */
#include <iostream>
using namespace std;
/*
 * class Test内存中数据结构
 * :Vptr 如果有虚函数，那么这个虚函数指针在第一位
 * :int a 后面则按照声明顺序放置其他变量
 *
 * 对于私有变量的访问，就可以用一些gay技巧了
 */
class Test
{
private:
	int a;
public:
	Test(int _a): a(_a) { }
	virtual f() {}
	void pri() { cout<<a<<endl; }
	int* get() { return &a; }
};

int main()
{
	Test t(10);
	int* p = t.get();

	int a  = *((int*)&(t)+2); // 可以用这种方法来取得类中的所有数据，不管它是私有的还是共有的
	cout<<a<<endl;
	
	t.pri();
	*p = 11;
	t.pri();

	return 0;
}
