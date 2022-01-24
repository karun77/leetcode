
//technically correct code. but this is basically just a brute force attempt, i have to write a more efficient alogrithm
//which doesn't search all the numbers in the range

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        
        //this std::vector class thing is important to note
        //because we'll want to use dynamic arrays here, and for that we need this class
        
        //iterate through numbers low to high
        int num = low;
        int rem, d, i, c = 1,c1,l;
        
        std::vector<int> seqDigList;
        
        while(num <= high) {
            d = num;
            c1 = 0; c = 1;
            l = to_string(d).size();
            while(c1 < l) {
                rem = d%10;
                d /= 10;
                if(c>0) {
                    i = rem; c*=-1;
                } else
                {
                    if(rem != (i - (c1)))
                        break;
                }
                if(d==0) {
                    seqDigList.push_back(num);
                }
                c1++;
            }
            ++num;
        }
        return seqDigList;
    }
};



//this is not correct code, just a failed attempt
/*
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        
        //this std::vector class thing is important to note
        //because we'll want to use dynamic arrays here, and for that we need this class
        
        //iterate through numbers low to high
        int num = low;
        int rem, d, i, c = 1;
        
        std::vector<int> seqDigList;
        
        while(num <= high) {
            d = num;
            while(d != 0) {
                rem = d%10;
                d /= 10;
                if(c>0) {
                    i = rem; c*=-1;
                } else
                {
                    i-=rem;
                    if(i != 1){
                        break;
                    }
                    i=rem;
                }
            }
            if(d==0) {
                seqDigList.push_back(num);
            }
            num++;
        }
        return seqDigList;
    }
}; */