#include <iostream>
using namespace std;
#include <string>
class Solution
{
	public:
	int* arr1;
	int* arr2;
	    string swap(string s,int p1,int p2)
	    {
	        int i;
	        char t;
	        for(i=p2;i>p1;i--)
	        {
	            t=s[i];
	            s[i]=s[i-1];
	            s[i-1]=t;
	        }
	        return s;
	    }
		void find_permutation(string s)
		{
		    int n=s.length();
		    arr1=new int[n];
		    arr2=new int[n];
		    int i,j;
		    for(i=0;i<n;i++)
		    {
		        arr1[i]=1;
		        arr2[i]=n-i;
		    }
		    cout<<"ALL THE PERMUTATIONS OF \""<<s<<"\" ARE: \n"<<endl;
		    cout<<s<<" ";
		    permu(&s,n);
		}
		void permu(string *s, int l)
		{
		    int i,j,n=s->length();
		    string s2=*s;
		    int cur=n-l;
		    for(i=cur+1;i<n;i++)
		    {
		        if(arr1[cur+1]<arr2[cur+1])
		        {
		            permu(&s2,l-1);
		            i--;
		        }
		        else
		        {
		            if(cur==0 || (n>4 && cur==1)) cout<<endl;
		            s2=swap(*s,cur,i);
		            cout<<s2<<" ";
		            arr1[cur]++;
		            for(j=cur+1;j<n;j++) arr1[j]=1;
		        }
		        if(i==n-1) permu(&s2,l-1);
		    }
		 
		}
};
int main() {
    string s="ABC";
    Solution obj;
    obj.find_permutation(s);

    return 0;
}
