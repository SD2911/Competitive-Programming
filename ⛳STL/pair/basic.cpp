 # 
  pair call by function
       pair<int, int> p;
        p = make_pair(2,3);
            
            p.first++;
            
        cout<<p.first << " " << p.second << endl;


# 
  pair<string, vector<int>> p;

  p = {"sumone",{1,2,3}};

  cout<<p.first<<endl;
  cout<<p.size();


# compare pair

  pair<int, int> p1, p2;

  p1={3,5};
  p2={5,4};

  if(p1<p2) cout<<"YES";
  else cout<<"NO";

# min and max 
          pair<int, int> p1,p2;
           p1 = {3,5};
           p2 = {1,6};
           
           pair<int, int> p = min(p1,p2);
           
           cout<<p.first<<" "<<p.second<<endl; //1 6

#

          vector<pair<int, int>> v;
          
          v.pb({6,5});
          v.pb({2,3});
          v.pb({4,5});
          v.pb({6,1});
          v.pb({1,9});
        
  //sort depend on first value, if first vlaues are equal the go for second value
   //decreasing order e sort korte chaile second value will get priority.    
          sort(v.begin(),v.end());
          
          for(auto u:v)
           cout<<u.first<<" "<<u.second<<endl;
         
                  
            
      
        //}
      return 0;
    }

#similarly,
    pair<int,int> p[]={{6,5},{2,3},{4,5}};
         
         sort(p,p+5);
         for(int i=0; i<5; i++) 
           cout<<p[i].first<<" "<<p[i].second<<endl;
                  

# 
     vector<pair<string, int>> v;
       
       v.pb({"shariar",21});
       v.pb({"momo",15});
       v.pb({"hasan",54});
       v.pb({"kader",43});
        v.pb({"momo",15});
        v.pb({"kader",43});
       
       sort(v.begin(),v.end());
       
      //for unique element 
       int unq = unique(v.begin(),v.end())-v.begin();
       
  for(int i=0; i<unq; i++)
     cout<<v[i].first<<' '<<v[i].second<<endl;







