#include<iostream>
using namespace std;

int  makeSieve(int n){
    
    bool isPrime[n+1];
    
    for(int i=0;i<=n;i++){
        isPrime[i]=true;
    }
    
    isPrime[0]=false;
    isPrime[1]=false;
    
    
    for(int i=1;i*i<=n;i++){
        if(isPrime[i]==true){
         for(int j=i*i;j<=n;j=j+i){
             isPrime[j]=false;
         }   
        }
    }
    
    int counter=0;
    for(int i=1;i<=n;i++){
        if(isPrime[i]==true){
            counter++;
        }
    }
    
    return counter;
    
}

int main(){
	// Write your code 
    
    int n;
    cin>>n;
    
    int ans=makeSieve(n);
    cout<<ans<<endl;
    
	return 0;
}