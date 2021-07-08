/*Time is precious. So lets get to the crux of the problem straightaway!

Given 3 positive numbers A, B and C. We make a set which contains numbers that are either multiples of A or B or (A and B) in increasing order. We take the C-th number of set and print from C-th number to 0 with a step value of A or B whichever it is multiple of and if its a multiple of both, then use step value as LCM(A, B)
 

Hint: It's recommended you implement this using continue and goto statements. ;)


Constraints:

2 <= A,B <= 1000 (A and B will not be equal)

1 <= C <= 1000

Input format:

One line containing numbers - A, B, and C

Output format:

One line containing values from C-th number to 0 with the corresponding step value.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	long long int arr[10000];
	cin>>a>>b>>c;
	long long int m=1;
	for (int i =0;i<c;i++){
		while(m++){
			if(m%a==0 || m%b==0){
			arr[i]=m;
			break;
		    }
		}
	} 
int k=arr[c-1];
int lcm;
if(k%a==0 && k%b==0){
		long long int max=(a>b)? a:b;
		while(1){
              if(max%a==0 && max%b==0){
              	lcm=max;
              	break;
                }
                max++;
              }
		
      while(k>=0)
      {
      	cout<<k<<" ";
      	k=k-lcm;
      }
}
	
else if (k%a==0)
	{
		while(k>=0)
		{
      	cout<<k<<" ";
      	k=k-a;
        }
    }
	else {
		while(k>=0){
      	cout<<k<<" ";
      	k=k-b;

        }
	}
	
 }