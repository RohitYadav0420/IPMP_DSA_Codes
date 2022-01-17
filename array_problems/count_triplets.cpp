#include <iostream>
#include<cmath>
using namespace std;

int triplets_count(int n)
{
    int count=0;
    
    int temp;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            temp= i*i + j*j ;
            
            int y= sqrt(temp);
            
            if(y*y == temp && y<=n)
            {
                count++;
            }
        }
    }
    
    return count;
}

int main() {
	
	int n;
	cin>>n;
	
	int ans= triplets_count(n);
	
	cout<<ans;
	

	return 0;
}
