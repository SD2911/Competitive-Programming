#
priority_queue<int> p;
        
        p.push(1);
        p.push(2);
        p.push(4);
        p.push(3);
        
    //priority_queue will give priority to greater value
    
     while(!p.empty()){
         cout<<p.top()<<" ";
         p.pop();
     }
     cout<<endl;  // 4 3 2 1
     
     cout<<p.size()<<endl;   //0







