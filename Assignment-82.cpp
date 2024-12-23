#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream my_life("demo3.txt",ios::out);
    if(!my_life){
        cout<<"Failed to open the file for append";
        return 0;
    }
    my_life<<"line 4"<<endl;
    my_life<<"line 5"<<endl;
    my_life<<"line 6"<<endl;
    my_life.close();
    return 0;
}