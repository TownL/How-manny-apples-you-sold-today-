//This code ask to the seller how many apples sold.
//Jan M. Rodriguez Cumba
//April 4, 2022

#include <iostream>
#include <string>

using namespace std;

int main()

{
    string name;
    int apples;
    
    cout<<"What is your name?"<<endl;
    getline(cin,name);//getline(cin,---) (recoge todo lo que este en la linea.)
    cout<<"How many apples you sold today?"<<endl;
    cin>> apples;
    cout<<"Thanks for all, have a nice day: " <<name<<endl;
    
    return 0;
    
}

