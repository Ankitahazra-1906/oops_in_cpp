#include<iostream>
using namespace std;
class students{
    private:
    int marks;
    public:
    char sec;
    
void print(){
    cout<<"marks is "<<marks<<endl;
    cout<<"sec is "<<sec<<endl;
    
}
    //Default Constructor
    students(){
        cout<<"Constructor called "<<endl;
       

    }
    //Parametirized Constructor
    students(int marks){
        cout<<"address of marks is "<<this<<endl;
        this->marks=marks;
        
    }
    students(int marks,char sec){
        this->marks=marks;
        this->sec=sec;
       
    }
    //copy constructor
    students(students& temp){
        cout<<"copy constructor called"<<endl;
        this->marks=temp.marks;
        this->sec=temp.sec;
    }
    int getmarks(){
    return marks;
    }
    char getsec(){
    return sec;
    }
    void setmarks(int n){
    marks=n;
    }
    void setsec(char ch){
    sec=ch;
    }
    //destructor
    ~students(){
        cout<<"destructor called "<<endl;
    }
   
};
    

int main(){
    //static
    students a;
    //dynamic
    students*b=new students;
    //manually destructor call
    delete b;
   
    //students flora(90,'A');
    //flora.print();
    //copy constructor
    //students dora(flora);
    //dora.print();


   //students annie(11);
   //cout<<"address of annie is"<<&annie<<endl;
   //annie.print();

   
   //students temp(64,'D');
   //temp.print();
    
    //static allocation
    //students s;
    /*s.setmarks(65);
    s.setsec('A');
    cout<<"marks is "<<s.getmarks()<<endl;
    cout<<"sec is "<<s.sec<<endl;*/

    //dynamic allocation
    /*students *p=new students;
    (*p).setmarks(45);
    (*p).setsec('B');
    cout<<"marks is "<<(*p).getmarks()<<endl;
    cout<<"sec is "<<(*p).sec<<endl;*/
   
    //s.setmarks(84);   //setter
    //s.sec='A';
    //cout<<"marks: "<<s.getmarks()<<endl;//getter
    //cout<<"sec: "<<s.sec<<endl;
    //cout<<"size: "<<sizeof(s)<<endl;
}
