#include <iostream>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int size;
        cin >> size;
        int *arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
            cout << arr[i] << " ";
        }

        int index = 0;
        // the controller of the loop and his value is the init value of the index in the new row
        int continue_arr = 0;
        int max_num;
        while (true)
        {
            // loop controller
            if (continue_arr == size - 1)
            {
                break;
            }
            // checks if the last max bigger than the new one
            if (index == continue_arr)
            {
                // this is init value of the max num in the start of the loop
                max_num = max(arr[index], arr[index + 1]);
            }
            else
            {
                max_num = max(max_num, arr[index + 1]);
            }
            cout << max_num << " ";
            index++;
            // this condition checks if the row ends or not
            if (index == size - 1)
            {
                continue_arr++;
                index = continue_arr;
            }
        }
        cout << endl;
    }
}

// ------------------------------------------------

// int main()
// {
//     int cases;
//     cin >> cases;
//     while (cases--)
//     {
//         int size;
//         cin >> size;
//         int *arr = new int[size];
//         for (int i = 0; i < size; i++)
//         {
//             cin >> arr[i];
//         }
//         int max;
//         // columns
//         for (int i = 0; i < size; i++)
//         {
//             // rows
//             for (int j = 0; j < (size - i); j++)
//             {
//                   cout << " [ ";

//                 // sub array
//                 for (int x = 0; x < i + 1; x++)
//                 {
//                     if (x == 0)
//                     {
//                         max = arr[j + x];
//                     }
//                    cout << arr[j + x] << " ";
//                     if (max < arr[j + x])
//                     {
//                         max = arr[j + x];
//                     }
//                 }
//                cout << " ] ";
//                 cout << max << " ";
//                 int max;
//             }
//             cout << endl;
//         }
//     }
// }