#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int tc;
	cin>>tc;
	while(tc--) {
	    int q,d;
	    cin>>q>>d;
	    int arr[q+10],mx=-1;
	    for(int i=0;i<q;i++){
	    	cin>>arr[i];
	    	mx = max(mx,arr[i]);
	    }
	    int lucky[mx+10]={0};
	    lucky[0]=d;
	    for(int i=1;i<mx;i++){
	    	if(lucky[i]>mx){
	    		mx = i;
	    		break;
	    	}
	    	else{
	    		lucky[i]= lucky[i-1]+10;
	    	}
	    }
	    int flag =0;
	    for(int i=0;i<q;i++){
	    	for(int j=0;j<mx;j++){
	    		if(arr[i]==lucky[j]){
	    			flag=1;
	    		}
	    	}
	    	if(flag==1) cout<<"YES"<<"\n";
	    	else cout<<"NO"<<"\n";
	    }
	}
	return 0;
}