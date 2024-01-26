class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ret; // vector do przechowywania wyników
        int counter = 1, start = 0, end = 0; // zmienna pomocnicza, początka i końca przedziału
        bool range = false; // zmienna pomocnicza, do sprawdzenia czy wynik zostal juz zapisany
        string out = "";

        
        for (int i = 0; i < nums.size(); i++) {
            counter = 1, start = nums[i], end = nums[i], range = false, out = ""; // ustawiamy podstawowe wartości

            while (i + counter < nums.size() && 
                nums[i + counter] == nums[i] + counter) { // jezeli nastepna liczba jest rowna naszej + 1 to sprawdzamy dalej

                    counter++;

                    if (i + counter >= nums.size()|| 
                    nums[i + counter] != nums[i] + counter) { // jezeli wykryjemy koniec przedzialu, to wpisujemy do vectora wynik

                        end = nums[i + counter - 1];
            
                        if (start != end) {
                            out = to_string(start) + "->" + to_string(end);
                            ret.push_back(out);
                            range = true;
                        } else{
                            out = to_string(start);
                            ret.push_back(out);
                            range = true;
                        }
                        i = i + counter - 1; // -1, poniewaz za chwile nastapi nastepna iteracja (+1)
                    }
                }
                
                if(!range){
                    ret.push_back(to_string(start));
                    range = false;
                }
        }
        return ret;
    }
};
