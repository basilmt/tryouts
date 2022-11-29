#include <iostream>
#include <string>
using namespace std;

int myFunction(string str) {
    
    int letter_count = str.length();
    string w = "STELLANTIS";
    int count = 0;
    
    while (true)
    {
        for(int i=0; i<w.length(); i++){
            int f = str.find(w[i]);
            if (f == -1){
                cout << "Remaining Letters: " << letter_count - w.length()*count << "\n";
                return count;
            }
            str.erase(f,1);
    }
    count++;
    }
}


int main() {

string letters;
int wcount = 0;
cout << "Type letters: ";
cin >> letters;
wcount = myFunction(letters);
cout << "word count: " << wcount<< "\n";
return 0;
}