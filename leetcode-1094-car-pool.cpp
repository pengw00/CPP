class solution {
public:
	//greedy stretagy with preprocess
	bool carPooling(vector<vector<int>>& trips, int capacity) {
		int stops[1001] = {};
		for(auto t: trips) stops[t[1]] += t[0], stops[t[2]] -= t[0];
			//nice conditional loop
		for(auto i = 0; capacity >= 0 && i <1001; i++) capactiy -= stops[i];
		 return capacity >=0;
	}
};