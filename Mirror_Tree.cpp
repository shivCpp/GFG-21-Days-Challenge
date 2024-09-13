class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        
         if (node== NULL) {
        return;
    }
    
    queue<Node*> q;
    q.push(node);
    
    while (!q.empty()) 
    {
        Node* current = q.front();
        q.pop();
        
        Node* temp = current->left;
        current->left = current->right;
        current->right = temp;
        
         if (current->left != NULL) {
            q.push(current->left);
        }
        if (current->right != NULL) {
            q.push(current->right);
        }
    }
    
        // code here
    }
