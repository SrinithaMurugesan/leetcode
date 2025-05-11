class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;
        for (int i = 0; i < sentences.size(); i++) {
            int wordCount = 1;
            for (int j = 0; j < sentences[i].length(); j++) {
                if (sentences[i][j] == ' ') {
                    wordCount++;
                }
            }
            if (wordCount > maxWords) {
                maxWords = wordCount;
            }
        }
        return maxWords;
    }
};