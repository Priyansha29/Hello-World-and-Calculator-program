// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cout <<"Enter an integer: ";
    cin>>a;
    cout<<"Integer = "<<a<<" and size is "<<sizeof(a)<<" bytes"<<endl;
    
    float b;
    cout<<"enter decicaml number: ";
    cin>>b;
    cout<<"Float = "<<b<<"and size is "<<sizeof(b)<<" bytes"<<endl;
    
    double c;
    cout <<"Enter a decimal number: ";
    cin>>c;
    cout<<"number = "<<c<<" and size is "<<sizeof(c)<<" bytes"<<endl;
    
    char d;
    cout <<"Enter an character: ";
    cin>>d;
    cout<<"character = "<<d<<" and size is "<<sizeof(d)<<" bytes"<<endl;
    
    
    string f;
    cout <<"Enter string: ";
    cin>>f;
    cout<<" string = "<<f<<" and size is "<<sizeof(f)<<" bytes"<<endl;
    
    bool e;
    cout <<"Enter an yes or no: ";
    cin>>e;
    cout<<" boolean value = "<<e<<" and size is "<<sizeof(e)<<" bytes"<<endl;

    return 0;