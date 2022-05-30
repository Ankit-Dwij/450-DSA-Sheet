  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> ans;
        map<int,int> m;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            int line = it.second;
            Node* node = it.first;
            m[line]=node->data;
            
            if(node->left)  q.push({node->left,line-1});
            if(node->right) q.push({node->right,line+1});
        }
        
        for(auto it:m){
            ans.push_back(it.second);
        }
        return ans;
    }
};