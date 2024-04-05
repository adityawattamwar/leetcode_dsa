class MyCalendar {
private:
    vector<pair<int, int>> l;
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        bool flag = true;
        for(auto a : l) {
            if(start < a.second && end > a.first) {
                flag = false;
                break;
            }
        }
        if(flag) {
            l.push_back(make_pair(start, end));
            return true;
        }
        return false;
    }
};