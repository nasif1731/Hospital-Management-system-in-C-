#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Define a template class for a jagged array
template <typename T>
class JaggedArray {
private:
    vector<vector<T>> jaggedArray; // jagged array of type T
public:
    // Function to input numbers into the jagged array
    void inputNumbers() {
        string input;
        cout << "Enter numbers separated by commas (press Enter to start a new row):" << endl;
        while (getline(cin, input))
        {
            if (input.empty())
            {
                break;
            }
            vector<T> row;
            string token;
            int i = 0;
            while (i < input.size())
            {
                if (input[i] == ',')
                {
                    row.push_back(stof(token));
                    token.clear();
                }
                else {
                    token += input[i];
                }
                i++;
            }
            if (!token.empty())
            {
                row.push_back(stof(token));
            }
            jaggedArray.push_back(row);
        }
    }

    // Function to output the jagged array
    void outputJaggedArray() {
        cout << "\nJAGGED ARRAY IS:\n";
        for (int i = 0; i < jaggedArray.size(); i++)
        {
            for (int j = 0; j < jaggedArray[i].size(); j++)
            {
                cout << jaggedArray[i][j] << "  ";
            }
            cout << endl;
        }
    }
};

int main() {
    // Create an instance of the JaggedArray class for floats
    JaggedArray<float> ja;

    // Input numbers into the jagged array
    ja.inputNumbers();

    // Output the jagged array
    ja.outputJaggedArray();

    // Pause the console window
    system("pause>0");

    return 0;
}


