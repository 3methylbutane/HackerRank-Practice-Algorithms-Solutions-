#include<iostream>
#include<cmath>
int main(){   
     int n;    
     int m;
    cin >> n >> m;
    int twobytwo  = (m / 2) * (n / 2);
    int factor =0;
    if( (m%2 ==1) && (n%2 ==1) ){ 
       factor = ( (m/2 +1) + ((n-1) /2) );
     }else if(m%2 == 1){
        factor = n/2;
    }else if(n%2 == 1){
        factor = m/2;
    } 
   cout <<(twobytwo+factor);
    return 0;
}
