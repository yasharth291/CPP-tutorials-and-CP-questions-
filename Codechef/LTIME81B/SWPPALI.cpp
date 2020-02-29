#include<bits/stdc++.h>

int main(){
	int T;
	std::cin>>T;
	while(T--){
    	int n;
    	std::cin>>n;
    	char input[n];
    	for(int i=0;i<n;i++){
        	std::cin>>input[i];
    	}
    	int times = 0,flag = 0;
    	int used[n]={0};
    	for(int i=0;i<=n/2;i++){
        	if(input[i] != input[n-i-1]){
            	if(used[i+1] == 0 && used[i] == 0 && (i+1) != (n-i-1) && input[i+1] == input[n-i-1])
            	{
                	int temp = input[i];
                	input[i] = input[i+1];
                	input[i+1] = temp;
                	used[i] = 1;
                	used[i+1] = 1;
                	times++;
            	}
            	else if(used[n-i-1] == 0 && used[n-i-2] == 0 && i != (n-i-2) &&input[i] == input[n-i-2]){
                	int temp = input[n-i-1];
                	input[n-i-1] = input[n-i-2];
                	input[n-i-2] = temp;
                	used[n-i-1] = 1;
                	used[n-i-2] = 1;
                	times++;
            	}
            	else
            	{
                	flag = 1;
                	break;
            	}
        	}
    	}
    	if(flag == 1)
    	{
        	std::cout<<"NO\n";
    	}
    	else
    	{
        	std::cout<<"YES\n";
        	std::cout<<times<<"\n";
    	}
	}
    
}
