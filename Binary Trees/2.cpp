//Function to find the height of a binary tree.
int height(struct Node* node)
{
    //code here
    if(node==NULL)
        return 0;
    else{
        int h_left = height(node->left);
        int h_right = height(node->right);
        return 1+(h_left>h_right?h_left:h_right);
    }

    
    
}