class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int sone=0,szero=0;
        for(int i=0;i<students.size();i++){
            if(students[i]==0){
                szero++;
            }
            if(students[i]==1){
                sone++;
            }
        }
        for(int i=0;i<sandwiches.size();i++){
            if(szero>0 and sandwiches[i]==0){
                szero--;
            }
            else if(sone>0 and sandwiches[i]==1){
                sone--;
            }
            else{
                break;
            }
        }
        return szero+sone;
        
    }
};