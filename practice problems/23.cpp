
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
  int data;
  node *left;
  node *right;
};
struct node * root=NULL; 



void insert(node *root, int value) {
  node *new_node = new node();
  new_node->data = value;
  new_node->left = NULL;
  new_node->right = NULL;

  if (!root) { 
    root = new_node;
    return root;

    
  }
  node *current_root = root;
  while (1) {
    if (current_root->data > value) {
      if (current_root->left) 
        current_root = current_root->left;
      else { 
        current_root->left = new_node;
        break;
      }
    } else {
      if (current_root->right) 
        current_root = current_root->right;
      else { 
        current_root->right = new_node;
        break;
      }
    }
  }
  
  
}
node inorder(node *root)
{
  if(root!=NULL)
  {
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
  }
}



int main()
{
  int n,a;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a;
    insert(root,a);
  }
  cout<<root->data<<endl;

  
  return 0;
}

