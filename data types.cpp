//23070123014 AKSHIT MATHUR
#include <iostream>
using namespace std;
int main() {
    int myIntVar;
    float myFloatVar;
    char myCharVar;
    string myStringVar;
    bool myBoolVar;
    double myDoublefloatVar;
    cout<<"enter  myIntVar:"<<endl;
    cin>> myIntVar;
    cout<<"size of integer is"<<sizeof(myIntVar)<<"bytes"<<endl;
    cout<<"enter myFloatVar:"<<endl;
    cin>>myFloatVar;
    cout<<"size of float is"<<sizeof(myFloatVar)<<"bytes"<<endl;
    cout<<"enter myCharVar:"<<endl;
    cin>>myCharVar;
    cout<<"size of char is"<<sizeof(myCharVar)<<"bytes"<<endl;
    cout<<"enter myStringVar:"<<endl;
    cin>>myStringVar;
    cout<<"size of string is"<<sizeof(myStringVar)<<"bytes"<<endl;
    cout<<"enter myBoolVar:"<<endl;
    cin>>myBoolVar;
    cout<<"size of bool is"<<sizeof(myBoolVar)<<"bytes"<<endl;
    cout<<"enter myDoublefloatVar:"<<endl;
    cin>>myDoublefloatVar;
    cout<<"size of integer is"<<sizeof(myDoublefloatVar)<<"bytes"<<endl;
    return 0;
}
//output
//enter myIntVar:3
//size of integer is4bytes
//enter myFloatVar:4.5
//size of float is4bytes
//enter myCharVar:p
//size of char is1bytes
//enter myStringVar:hello
//size of string is32bytes
//enter myBoolVar:1
//size of bool is1bytes
//enter myDoublefloatVar:5.6666666666
//size of integer is8bytes


