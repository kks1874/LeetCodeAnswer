class Solution {
public:
	vector<string> fizzBuzz(int n) {
		vector<string> v(n);
		for (int i = 1, j = 0; i <= n; ++i) {
            j = i - 1;
			if (i % 3 == 0) v[j] = "Fizz";
			if (i % 5 == 0) v[j] += "Buzz";
			if(v[j].empty()) v[j] = to_string(i);
		}
		return v;
	}
};
