// Problem from Hackerrank - Counting Valleys
int countingValleys(int steps, string path) {
    int i,altitude=0,countOfValley=0;
    for(i=0;i<=path.size()-1;i++){
        // only condtion for a valley to be found is to check from its ending condition
        // i.e if we are touching alitude level= 0 by going up, then we just travelled through a valley
        if(path[i]=='U'&&altitude==-1)
            countOfValley++;
        if(path[i]=='U')
            altitude++;
        else altitude--;
    }
    return countOfValley;
}
