class MyCalendar {
private:
    vector<pair<int, int>> l;
    int cnt=0;
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        bool flag = false;
        for(auto a : l) {
            if(start >= a.second or end <= a.first) {
                flag = true;
                
            }
            else{
                flag=false;
                break;
            }
        }
        if(flag || cnt==0) {
            l.push_back(make_pair(start, end));
            cnt++;
            return true;
        }
        return false;
    }
};