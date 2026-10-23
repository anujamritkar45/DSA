class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
    int dist=0;
    while(mainTank>=5 && additionalTank!=0){
        mainTank=mainTank-5;
        dist=dist+50;
        mainTank=mainTank+1;
        additionalTank--;
    }
    dist=dist+mainTank*10;
    
    return dist;
    }
};