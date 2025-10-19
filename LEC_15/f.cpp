https://www.naukri.com/code360/problems/ceiling-in-a-sorted-array_1825401?leftPanelTab=0&leftPanelTabValue=SUBMISSION

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	int l = 0 , h = a.size() - 1 ;
	int p1 = -1 ;
	while(l <= h){
		int idx = (l+h)/2 ;
		if(a[idx] == x){
			p1 = a[idx] ;
			break ;
		}
		else if(x > a[idx] ){
			l = idx+1;
			p1 = a[idx] ;
		}
		else{
			h = idx - 1 ;
		}
	}
	l = 0 , h = a.size() - 1 ;
	int p2 = -1;
	while(l <= h){
		int idx = (l+h)/2 ;
		if(a[idx] == x){
			p2 = a[idx] ;
			break ;
		}
		else if(x < a[idx] ){
			h = idx-1;
			p2 = a[idx] ;
		}
		else{
			l = idx + 1 ;	
		}
	}	
	return {p1,p2} ;
}