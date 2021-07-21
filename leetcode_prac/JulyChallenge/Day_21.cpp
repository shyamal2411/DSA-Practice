class Solution {
public:
    string pushDominoes(string dominoes) {
        int n = dominoes.size();
        dominoes="L"+dominoes+"R";
        int l=0,r=1,p,q;
        
        while(l<=(n+1) && r<=(n+1)){
            while(dominoes[r]=='.'){
                r++;
            }

            if(dominoes[l]=='R' && dominoes[r]=='L'){
                p=l+1,q=r-1;

                while(p<q){
                    dominoes[p]='R'; dominoes[q]='L'; p++; q--;
                }
            }else 
            if(dominoes[l]=='L' && dominoes[r]=='L'){
                q=r-1;
                while(q>l){
                    dominoes[q]='L'; q--;
                }
            }else
            if(dominoes[l]=='R' && dominoes[r]=='R'){
                p=l+1;
                while(p<r){
                    dominoes[p]='R'; p++;
                }
            }
            l=r;
            r++;
        }
        return dominoes.substr(1,n);
    }
};
