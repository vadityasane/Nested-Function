#include <iostream>

using namespace std;


class Outer
{
 public:
     int a=10;
     static int b;

     void fun()
     {

     }

     class Inner
     {
   public:
    int x=60;

    void show()
    {
        cout<<b<<endl;
    }
     };
 Inner i;
};
int Outer::b=20;

int main()
{

    Outer::Inner i;
    return 0;
}
