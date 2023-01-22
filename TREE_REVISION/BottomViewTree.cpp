/* This is the Node class definition

class Node {
public:
    Node* left;
    Node* right;
    int data;

    Node(int data) {
        this->left = NULL;
        this->right = NULL;
        this->data = data;
    }
};
*/

vector<int> topView(Node* root) {
    // add your logic here
	
	map<int,int>mp;
    vector<int>ans;
    queue<pair<Node*,int>>q;
    q.push({root,0});

    while(!q.empty())
    {
        auto it=q.front();
        q.pop();

        Node*node=it.first;
        int line=it.second;
      
        mp[line]=node->data;                            //// over-writing the values
        
        if(node->left)
        {
            q.push({node->left,line-1});
        }
        if(node->right)
        {
            q.push({node->right,line+1});
        }
    }
    for(auto i:mp)
    {
        ans.push_back(i.second);
    }

    return ans;
}
