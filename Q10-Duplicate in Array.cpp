int findDuplicate(vector<int> &arr) 
{
    
	
	// Write your code here.
	int ans = 0;

	for(int i= 0;i<arr.size();i++){
		ans = ans ^ arr[i];
	}
	for(int i= 1;i<arr.size();i++){
		ans = ans ^ i;
	}
	return ans;
}

	

//question link - https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbmpwd0oxWE5hMkNTN1lNU2FUUlB0V0VWR0xlQXxBQ3Jtc0tuZWpSQlRlNVZQQ1QzWmdHTE5JSG54Yy1TS3RLeHJGdDlZU1RfWWp6cU9Hb0ktNmlhXy1YX0hReDFpbFBZU19LMmdTUWluaks2VUVMWmQtdFR4YXNKbFNGQzhpdmhvWmUyRlZDTzlmcGRBX3p1bjRPOA&q=https%3A%2F%2Fbit.ly%2F3dm6bdZ&v=oVa8DfUDKTw
