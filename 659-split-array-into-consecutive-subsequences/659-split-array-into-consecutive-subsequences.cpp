class Solution {
public:
    bool isPossible(vector<int>& nums) {
	vector<int> sub(3000, false);
	for(int i : nums) sub[i+1000]++;
	int count = 0, last = 0;
	queue<int> q;
	for(int i = 0; i < 2004; i++) {
		while (sub[i] > q.size()) q.push(i);

		while (sub[i] < q.size()) {
			if(q.front()+2 < i) q.pop();
			else return false;
		}

	}
	return true;

    }
};