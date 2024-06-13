class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int moves=0;
        moves+=abs(seats[0]-students[0]);
        for(int i=1;i<seats.size();i++){
            
                moves+=abs(seats[i]-students[i]);
        
        }
        return moves;
    }
};