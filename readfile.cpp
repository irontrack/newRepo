#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    char line[80];
    char file[80];
    
    cout<<"type the name of the file you want to read";
    cout<<"(must be in same directory) ";
    cin>>file;
    
    ifstream read;
    
    read.open(file);
    
    read.getline(line,80);
    
    cout<<line;
    
    system("pause");
    
    return 0;
    
}
