 vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	if(!root) return {};
    	stack <Node*> st;
    	vector<int> ans;
    	int level  =1;
    	st.push(root);
    	
    	while(!st.empty()){
    	    stack<Node*> tempSt;
    	    level++;
    	    while(!st.empty()){
    	        ans.push_back(st.top()->data);
    	        if(level%2==0){
    	            if(st.top()->left){
    	                tempSt.push(st.top()->left);
    	            }
    	            if(st.top()->right){
    	                tempSt.push(st.top()->right);
    	            }
    	        }else{
    	            if(st.top()->right){
    	                tempSt.push(st.top()->right);
    	            }
    	            if(st.top()->left){
    	                tempSt.push(st.top()->left);
    	            }
    	        }
    	        st.pop();
    	    }
    	    st=tempSt;
    	}
    	return ans;
    }
};