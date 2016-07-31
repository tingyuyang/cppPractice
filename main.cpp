#include <iostream>
using namespace std;

//function prototype
int solution(string &S);


int main()
{
    int result;
    char input[100];
    cout << "Input the string" << endl; 
    cin >> input;
    cin.ignore(100, '\n');
    result = solution(input);
    return 0;
}

//function:
int solution(string &S) { // write your code in C++ 
	if(S.empty()) return 0; 
	vector<pair<string, int> > dirs; 
	int len=S.length(); 
	int i=0; 
	int space_num=0; 
	bool has_dot=false; 
	string curr_dir; 
	int res=0; 
	while(i!=len) { 
		if(S[i]==' ') 
			space_num++; 
		else if(S[i]=='\n') { 
			while(!dirs.empty()&&dirs.back().second>=space_num) 
				dirs.pop_back(); 
			if(has_dot) { 
				int temp_len=curr_dir.length()+1; 
				for(int j=0;j<(int)dirs.size();j++) 
					temp_len+=dirs[j].first.length()+1; 
				if(temp_len>res) 
					res=temp_len; 
			} else dirs.push_back({curr_dir,space_num}); 
			curr_dir.clear(); 
			space_num=0; 
			has_dot=false; 
		} else { 
			curr_dir.push_back(S[i]); 
			if(S[i]=='.') 
				has_dot=true; 
		} 
		i++; 
	} 
	return res; 
}
