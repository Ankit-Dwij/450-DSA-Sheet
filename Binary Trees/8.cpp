 
 //left view {recursive}
 void util(Node* node,int level,vector<int> &v){
     if(node==NULL) return;
     if(v.size()==level) v.push_back(node->data);
     util(node->left,level+1,v);
     util(node->right,level+1,v);
 }

//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> v;
   util(root,0,v);
   return v;
}