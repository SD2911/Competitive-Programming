#
    stack<int> st;
        //enter element:
        st.push(1);
        st.push(2);
        st.push(3);
        st.push(4);
        
        cout<<st.top()<<endl; //4
        
        //if we want top 2nd element then at first we have to remove 1st element.
        
        st.pop();
        cout<<st.top()<<endl; //3

#    
     // print element of stack:
      stack<int> st;
        //enter element:
        st.push(1);
        st.push(2);
        st.push(3);
        st.push(4);

      while(!st.empty()){
           cout<<st.top()<<endl;
           st.pop();
       }





