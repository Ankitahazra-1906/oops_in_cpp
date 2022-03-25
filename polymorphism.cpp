#include<iostream>
using namespace std;

//Compile time polyorphism
class A{
    public:
    //function overloading
    //just change the input arguments
    void add(){
        cout<<"ADD"<<endl;
    }
    void add(int n){
        cout<<"add"<<endl;
    }

};
class B{
    public:
    int a;
    int b;
    int addition(){
        return a+b;
    }
    void operator+(B &obj){
        //operator overloading
        int val1=this->a;
        int val2=obj.a;
        cout<<"ans: "<<val2-val1<<endl;
        //cout<<"hello world"<<endl;
    }
    void operator() (){
        cout<<"I am operator "<<this->a<<endl;
    }

};
//Run time polymorphism
class animal{
    public:
    void speak(){
        cout<<"speak speak"<<endl;
    }
    

};
class dog:public animal{
    public:
    //method overriding
    void speak(){
        cout<<"bark bark"<<endl;
    }

};
int main(){
    A obj;
    obj.add();
    int n;
    obj.add(n);

    B obj1,obj2;
    obj1.a=4;
    obj2.a=7;
    obj1+obj2;
    obj1();

    dog d;
    d.speak();

    
}