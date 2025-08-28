//#include <iostream>
//using namespace std;
//
//int main() {
  //  int arr[5];
    //cout << "Enter any 5 number: ";
 //   for (int i = 0; i < 5; i++) {
   //     cin >> arr[i];
   // }

   // cout << "entered number: ";
  //  for (int i = 0; i < 5; i++) {
   //     cout << arr[i] << " ";
  //  }

 //   return 0;
//}
#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos, element;
    
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to insert: ";
    cin >> element;
    cout << "Enter position to insert (0-based index): ";
    cin >> pos;

    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = element;
    n++;

    cout << "Array after insertion:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
