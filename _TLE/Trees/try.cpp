int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        auto i = g.begin();
        auto j = s.begin();
        while(i != g.end() && j != s.end()){
            if(*j>=*i)
                i++; // when the child get the cookie, foward child by 1
            j++;
        }
        return i;
    }