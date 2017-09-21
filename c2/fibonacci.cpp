/*
 * fibonacci function
 * 1 1 2 3 5 
 */
#include <iostream>

using namespace std;

/*
 * @index:想要的下标号
 * @return:返回值
 */
int fibo_elem(int index)
{
    int former = 1;
    int latter = 1;
    int now = 1;

    // 判断输入的合理性
    // 与处理特殊情况
    if (index <= 0 || index > 1024){
        return 0;
    }/*
        else if(index == 1 || index == 2){
        return 1;
    }
    */

    // i 表示现在要求的数的位置
    for(int i=3; i<=index; i++){
        now = former + latter;
        former = latter;
        latter = now;
    }

    return now;
}

bool fibo_elem(int index, int &now)
{
    int former = 1;
    int latter = 1;

    if( index <=0 || index > 1024){
        now = 0;
        return false;
    }
    
    now = 1; 

    for(int i=3; i<=index; i++){
        now = former + latter;
        former = latter;
        latter = now;
    }

    return true;
}

int main()
{
    int elem;
    for(int i=-1; i<20; i++){
       // cout<<i<<":"<<fibo_elem(i)<<endl;
       cout<<fibo_elem(i, elem);
       cout<<" "<<i<<":"<<elem<<endl;
    }
    return 0;
}




