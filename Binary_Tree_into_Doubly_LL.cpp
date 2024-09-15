class Solution {
  public:
  
  void convertBTtoDLL(Node* root, Node*& head, Node*& prev) {
    if (root == nullptr) {
        return;
    }

    // Recursively convert the left subtree
    convertBTtoDLL(root->left, head, prev);

    // Process the current node
    if (prev == nullptr) {
        // The first node (leftmost node) becomes the head of DLL
        head = root;
    } else {
        // Link the previous node (prev) with the current node (root)
        prev->right = root;
        root->left = prev;
    }

    // Mark the current node as previous for the next node
    prev = root;

    // Recursively convert the right subtree
    convertBTtoDLL(root->right, head, prev);
}

    Node* bToDLL(Node* root) {
       
        Node* head = nullptr; // Head of the DLL
    Node* prev = nullptr; // To keep track of the previous node during inorder traversal

    convertBTtoDLL(root, head, prev);

    return head; // Return the head of the doubly linked list
        // code here
    }
