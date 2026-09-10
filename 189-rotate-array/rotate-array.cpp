class Solution {
public:
    void rotate(vector<int>& arr, int k) {
    int n=arr.size();
    k=k%n;
    int j=n-k;
    int x=0;
    vector<int> temp(k);

    for(int i=0;i<k;i++){
        temp[i]=arr[j];
        j++;
    }

    for(int i=n-1;i>=k;i--){
        arr[i]=arr[i-k];
    }

    for(int i=0;i<k;i++){
        arr[i]=temp[x];
        x++;
    }
    }
};