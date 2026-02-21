
// Example words we need to enter are: "minute" and "mints"
// trie will look like:

//                          m
//                          |
//                          i
//                          |
//                          n
//                         / \
//                        u   t
//                        |   |
//                        t   s
//                        |
//                        e


class TrieNode{

    public:

    unordered_map<char, TrieNode*> children;
    bool endOfWord;

    TrieNode(){
        endOfWord = false;
    }


};

class Trie {
public:

    TrieNode* root;

    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* node = root;

        // mom 
        // mother

        for(char w : word){

            if(!node->children.count(w)){
                node->children[w] = new TrieNode();
            }

            node = node->children[w];
        }

        node->endOfWord = true;
    }
    
    bool search(string word) {

        TrieNode* node = root;

        for(char w : word){
            if(node->children.count(w)){
                node = node->children[w];
            }else{
                return false;
            }
        }

        if(node->endOfWord){
            return true;
        }

        return false;
        
        
    }
    
    bool startsWith(string prefix) {
        TrieNode* node = root;

        for(char w : prefix){
            if(node->children.count(w)){
                node = node->children[w];
            }else{
                return false;
            }
        }

        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */