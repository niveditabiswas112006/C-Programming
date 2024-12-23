#include <iostream>
using namespace std;
class number{
    private:
    int n;
    public:
    void get_n(){
        cout<<"enter the number ";
        cin>>n;
    }
    void put_n(){
        cout<<n<<endl;
    }
    number operator + (number y){
        number ans;
        ans.n=n+y.n;
        return ans;
    }
};
int main(){
    number n1,n2,n3;
    n1.get_n();
    n2.get_n();
    n3=n1+n2;
    cout<<"the sum is ";
    n3.put_n();
    return 0;
}