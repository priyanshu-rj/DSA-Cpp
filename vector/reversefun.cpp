#include <iostream>
#include <vector>

using namespace std;  // Add this line

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    // Using s.begin() to iterate from the beginning to the end
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }

    cout << "\n";

    // Using s.rbegin() to iterate from the end to the beginning
    for (auto it = vec.rbegin(); it != vec.rend(); ++it) {
        cout << *it << " ";
    }

    return 0;
}


//if we use itertot
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int>::iterator it;

    // Using vec.begin() to iterate from the beginning to the end
    for (it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }

    cout << "\n";

    // Using vec.rbegin() to iterate from the end to the beginning
    for (vector<int>::reverse_iterator rit = vec.rbegin(); rit != vec.rend(); ++rit) {
        cout << *rit << " ";
    }

    return 0;
}
