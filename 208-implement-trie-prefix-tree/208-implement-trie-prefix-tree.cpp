class TrieNode {
    public :
        TrieNode* children[26];
        bool endsHere = false;
};

class Trie {
    TrieNode* root;
public:
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* temp = root;
        for (int i = 0; i < word.length(); i++) {
            if (temp -> children[word[i] - 'a'] != NULL) {
                temp = temp -> children[word[i] - 'a'];
            } else {
                TrieNode* child = new TrieNode();
                temp -> children[word[i] - 'a'] = child;
                temp = child;
            }
        }
        
        temp -> endsHere = true;
    }
    
    bool search(string word) {
        TrieNode* temp = root;
        for(int i = 0; i < word.length(); i++) {
            temp = temp -> children[word[i] - 'a'];
            if (temp == NULL) {
                return false;
            }
        }
        
        if (!temp -> endsHere) {
            return false;
        }
        
        return true;
    }
    
    bool startsWith(string prefix) {
        TrieNode* temp = root;
        for (int i = 0; i < prefix.length(); i++) {
            temp = temp -> children[prefix[i] - 'a'];
            if (temp == NULL) {
                return false;
            }
        }
        
        return true;
    }
};