class TrieNode{

public:
    unordered_map<char, TrieNode*> children;
    bool isEndOfWord;

    TrieNode(){
        isEndOfWord = false;
    }
};

class Trie {
public:


    TrieNode* obj;

    Trie() {  
        obj = new TrieNode();
    }

    
    
    void insert(string word) {

        TrieNode* node = obj;
        
        for(char c : word){
            
            if(!node->children.count(c)){
                node->children[c] = new TrieNode();
            }

            node = node->children[c];
        }

        node->isEndOfWord = true;
    }
    
    bool search(string word) {

        TrieNode* node = obj;
        
        for(char c : word){

            if(!node->children.count(c)){
                return false;
            }

            node = node->children[c];
        }

        if(node->isEndOfWord){
            return true;
        }
        return false;
    }
    
    bool startsWith(string prefix) {

        TrieNode* node = obj;
        
        for(char c : prefix){

            if(!node->children.count(c)){
                return false;
            }

            node = node->children[c];
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