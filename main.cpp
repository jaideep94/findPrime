#include <iostream>
using namespace std;

void print(int n);

int main()
{
    int n;
    cin>>n;
print(n);
   return 0;
}

void print(int n){
    int flag=0;

for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Prime at"<<n;
    }else{

return print(n+1);
}
}
