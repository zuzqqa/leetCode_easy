bool checkIfPangram(string sentence) {
        unordered_set<char> uniqueC;

        for(char& c: sentence){
            c = std::tolower(c);

            if(isalpha(c))
                uniqueC.insert(c);
        }

        return uniqueC.size() == 26 ? 1 : 0;
}
