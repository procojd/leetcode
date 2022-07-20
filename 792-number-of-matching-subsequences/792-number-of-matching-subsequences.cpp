class Solution {
	public:
		int numMatchingSubseq(string s, vector<string>& words) {
			vector<vector<int>> v(26);
			for(int i=0;i<s.length();i++){
				v[s[i]-'a'].push_back(i);            // first make hash-map

			}
			int ans=0;
			for(int i=0;i<words.size();i++){
				int last;                                             // last is used to store the index of last character
				if(v[words[i][0]-'a'].size()==0){
						continue;                                 // if first letter is not present then continue
				}
				else{
					last=*v[words[i][0]-'a'].begin();         // else store the min index at which the letter is present
				}
				int flag=1;
				for(int j=1;j<words[i].size();j++){
					auto it=upper_bound(v[words[i][j]-'a'].begin(),v[words[i][j]-'a'].end(),last);       

					if(it==v[words[i][j]-'a'].end()){                          // check if upperbound of last is not present so break
						flag=0;
						break;
					}

					else{
						last=*upper_bound(v[words[i][j]-'a'].begin(),v[words[i][j]-'a'].end(),last);
					}                                         // store upper bound value as last character 

				}
				if(flag)
					ans++;                                        // if whole string is present then flag==1 , so ans++
			}
			return ans;                                         // return ans
		}
	};