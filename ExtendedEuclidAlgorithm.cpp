#include <bits/stdc++.h>
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

int main(){

    int a,b;
    cin>>a;
    cin>>b;

    Triplet euclid=extendedEuclid(a,b);
    cout<<euclid.gcd<<endl;
    cout<<euclid.x<<endl;
    cout<<euclid.y<<endl;
    
	return 0;
}