//CODE BY YASHARTH DUBEY
//IIIT DHARWAD
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	stack <int> s;//declaring stack in c++ stl 
	for(int i = 0;i<10;i++)
	{
		s.push(i);//push() function adds the passed value in the last of the stack or rather saying it top position
	}
	while(!s.empty())//this condition is here to check whether our stack is empty or not
	{
		cout<<s.top()<<" ";//top() function gives us the data at the top position 
		s.pop();//removes the element from the top value
	}
}
//emplace() function also does the same work as push() but the difference is the push() function sends the copy of the data and emplace copies it same to same
