//https://www.naukri.com/code360/problems/replace-spaces_1172172?interviewProblemRedirection=true&search=replace%20spaces&leftPanelTabValue=SUBMISSION
#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	// Write your code here
	string temp;

	for(int i = 0;i<str.length();i++){
		if(str[i] ==' '){
			temp.push_back('@');
			temp.push_back('4');
			temp.push_back('0');
		}
		else{
			temp.push_back(str[i]);
		}
	}
	return temp;
}
