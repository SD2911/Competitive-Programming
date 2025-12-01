Given a sorted array arr with possibly some duplicates, the task is to find the first and 
last occurrences of an element x in the given array.
Note: If the number x is not found in the array then return both the indices as -1.
Examples:
Input: arr[] = [1, 3, 5, 5, 5, 5, 67, 123, 125], x = 5
Output: [2, 5]
Explanation: First occurrence of 5 is at index 2 and last occurrence of 5 is at index 5

 int n;
      cin >> n;
           vector<int> a(n);
           for(int i=0; i<n; i++) cin >> a[i];
     int x;
     cin >> x;
     int l=lower_bound(a.begin(),a.end(),x)-a.begin();
     int r=upper_bound(a.begin(),a.end(),x)-a.begin();
          
   if(l==r) cout<<-1<<" "<<-1<<endl;
   else cout<<l<<" "<<r-1<<endl;  
