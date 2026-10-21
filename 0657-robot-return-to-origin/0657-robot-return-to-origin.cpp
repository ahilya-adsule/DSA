class Solution {
public:
    bool judgeCircle(string moves) {
        int Rcount=0;
        int Lcount=0;
        int Ucount=0;
        int Dcount=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='R'){
                Rcount++;
            }
            else if(moves[i]=='L'){
                Lcount++;
            }
            else if(moves[i]=='U'){
                Ucount++;
            }
            else{
                Dcount++;
            }
        }
        if(Rcount==Lcount && Ucount==Dcount){
            return true;
        }
        else return false;
    }
};