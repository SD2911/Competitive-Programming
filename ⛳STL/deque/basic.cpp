#
 deque<int> dq;
            
            dq.push_front(1);
            dq.push_front(2);
            dq.push_front(3);
            dq.push_back(4);
            dq.push_back(5);
            
            for(auto u:dq){
                cout<<u<<" ";
            }
            cout<<endl; // 3 2 1 4 5 
            
    cout<<dq.front()<<" "<<dq.back()<<endl;//3 5 
        dq.pop_front();
    cout<<dq.front()<<" "<<dq.back()<<endl; //2 5
        dq.pop_back();
    cout<<dq.front()<<" "<<dq.back()<<endl; //2 4 
    
       cout<<dq.size()<<endl;  //3
       cout<<dq.empty()<<endl;  //0




