#include<iostream>
using namespace std;

class Triplet{
  public:
    int x;
    int y;
    int gcd;
};

Triplet extendedEuclid(int a,int b){
   if(b==0){
       Triplet ans;
       ans.gcd=a;
       ans.x=1;
       ans.y=0;
       return ans;
   }

   Triplet smallAns=extendedEuclid(b,a%b);
   Triplet ans;
   ans.gcd=smallAns.gcd;
   ans.x=smallAns.y;
   ans.y=smallAns.x-(a/b)*smallAns.y;

   return ans;
}
int multiInverse(int a,int m){

    Triplet ans=extendedEuclid(a,m);

    return ans.x;
}

int main(){

    int a,m;
    cin>>a;
    cin>>m;
    int ans=multiInverse(a,m);
    cout<<"Multiplicative"<<ans<<endl;

    return 0;
}