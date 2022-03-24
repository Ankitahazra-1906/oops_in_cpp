#include<iostream>
using namespace std;
class human{
    public:
    int height;
    int weight;
    int age;
    int birthyear;
    public:
    int getage(){
        return this->age;
    }
    void setage(int a){
        this->age=a;
    }
    void setheight(int h){
        this->height=h;
    }
    void setweight(int w){
        this->weight=w;
    }
    void speaking(){
        cout<<"speaking"<<endl;
    }
    
};
class animal{
    public:
    void barking(){
        cout<<"barking"<<endl;
    }

};

class male:public human{
    public:
    string colour;
    void sleep(){
        cout<<"male sleeping: "<<endl;
    }
    void setcolour(string s){
        this->colour=s;

    }



};
class male1:protected human{
    public:
    int getbirthyear(){
        return this->birthyear;
    }
    void setbirthyear(int by){
        this->birthyear=by;
    }

};
//multiple inheritance
class hybrid:public human,public animal{
    public:
    void dancing(){
        cout<<"dancing"<<endl;
    }

};
int main(){
    male object1;
    object1.setage(20);
    object1.setheight(5);
    object1.setweight(96);
    object1.setcolour("black");
    
    cout<<object1.age<<endl;
    cout<<object1.height<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.colour<<endl;
    //scope resolution operator
    object1.male::sleep();
    //object1.sleep();

    male1 object2;
    cout<<object2.getbirthyear()<<endl;

    hybrid h;
    h.barking();
    h.speaking();
    h.dancing();
    


   


    

     

}