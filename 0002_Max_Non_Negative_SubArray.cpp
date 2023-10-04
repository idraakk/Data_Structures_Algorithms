vector<int> Solution::maxset(vector<int> &A) {
    int m1,m2,t1=-1,t2;
    vector<int> r;
    long temp=0,max=0;
    for(int i=0;i<A.size();i++){
        if(A[i]>=0) t1=i;
        if(t1!=-1) break;
    }
    if(t1==-1) return r;
    m1=m2=t1;
    for(int i=t1;i<A.size();i++){
        if(A[i]>=0){
            temp+=A[i]; t2=i;
        }
        else {
            if(temp>max || (temp==max && t2-t1>m2-m1)){
                max=temp; m1=t1; m2=t2;
            }
            temp=0;
            t1=i+1;
        }
    }
    if(temp>max || (temp==max && t2-t1>m2-m1)){
                max=temp; m1=t1; m2=t2;
            }
            
    for(int i=m1;i<=m2;i++) r.push_back(A[i]);
    return r;
}
