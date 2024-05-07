#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int N, Q;
    unordered_map<string, string> ump;
    cin >> N >> Q;
    for (int i = 0; i < N; i++){
        string str1, str2;
        cin >> str1 >> str2;
        string abb = string {str1[0] , str2[0]};
        if (ump.find(abb) == 0)
        {
            string full_name = str1 + " " + str2;
            ump[abb] = full_name;
        } else {
            ump[abb] = "NNN";
        }
        
    }
    for (int i = 0; i < Q; i++)
    {
        string enquiry;
        cin >> enquiry;
        if (ump.find(enquiry) == 0)
        {
            cout << "nobody" << endl;
        } else if (ump[enquiry] == "NNN")
        {
            cout << "ambiguous" << endl;
        } else
        {
            cout << ump[enquiry] << endl;
        }   
    }
    return 0;
}
