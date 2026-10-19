class Solution {
public:
int dayOfYear(string date) {

    int n=date.size();
    int d=0,m=0,y=0;
    int i=0,p=3;

    while(date[i]!='-'){
        y=y+(date[i]-'0')*pow(10,p);
        p--;
        i++;
    }

    i++;
    p=1;

    while(date[i]!='-'){
        m=m+(date[i]-'0')*pow(10,p);
        p--;
        i++;
    }

    i++;
    p=1;

    while(i<n){
        d=d+(date[i]-'0')*pow(10,p);
        p--;
        i++;
    }

    vector<int> months={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(y%400==0 || (y%4==0 && y%100!=0)){
        months[2]=29;
    }
    int ans=0;
    for(int i=0;i<m;i++){
        ans=ans+months[i];
    }
    ans=ans+d;
    return ans;
}

};