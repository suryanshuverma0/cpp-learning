#include<iostream>
using namespace std;

class Base{
         private:
         int data1;

         public:
         int data2;
         void serData();
         int getData1();
         int getData2();
};   

void Base :: serData(){
         data1=100;
         data2=200;
}

int Base :: getData1(){
         return data1;
}

int Base :: getData2(){
         return data2;
}

class Derived : public Base{
         private:
         int data3;

         public:
         void processData();
         void displayData();

};

void Derived :: processData(){
         data3= data2 * getData1();
}

void Derived :: displayData(){
         cout<< "The value of data1 is: " << getData1()<<endl;//We use the method for data1 because it is private and we cannot access the private membet directly so we use the method for accessing it. But for data2 dnd data3 we accessed it directly because daata 2 and data3 are public member variable.
         cout<< "The value of data2 is: " << data2 <<endl;
         cout<< "The value of data3 is: " << data3 << endl;
}
int main() {

         Derived derived;
         derived.serData();
         derived.getData1();
         derived.getData2();
         derived.processData();
         derived.displayData();
         return 0;
}
