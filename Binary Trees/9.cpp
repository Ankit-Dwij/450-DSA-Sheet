
// Should return  right view of tree
class Solution
{
    public:
    void util(Node* node,int level,vector<int> &v){
        if(node==NULL) return;
        if(v.size()==level) v.push_back(node->data);
        util(node->right,level+1,v);
        util(node->left,level+1,v);
    }
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> v;
       util(root,0,v);
       return v;
    }
};