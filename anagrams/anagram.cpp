#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int isAnagram(string word1, string word2);
void check_anagram(vector<string> words1, vector<string> words2);


int main()
{
    const char *a[] = {"iceman", "host", "aba", "train"};
    const char *b[] = {"cinema", "shot", "bab", "rain"};
    vector<string> one(a, end(a));
    vector<string> two(b, end(b));
    check_anagram(one, two);
    return 0;
}

int isAnagram(string word1, string word2){
    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end());
    if(word1 == word2){
        return 1;
    } else {
        return 0;
    }
    //cout << word1 << endl;
    //cout << word2 << endl;
    return 0;
}

void check_anagram(vector<string> words1, vector<string> words2){
    for(int i = 0; i < words1.size(); i++){
        cout << isAnagram(words1[i], words2[i]) << endl;
    }
}
