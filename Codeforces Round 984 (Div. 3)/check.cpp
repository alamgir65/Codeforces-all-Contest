#include <iostream>
#include <vector>
using namespace std;

void spiralOrder(const vector<vector<int>>& matrix) {
    if (matrix.empty()) return;

    int top = 0;
    int bottom = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        // Traverse from left to right along the top row
        vector<int> v;
        string s;
        for (int i = left; i <= right; i++) {
            // cout << matrix[top][i] << " ";
            // v.push_back(matrix[top][i]);
            s+=to_string(matrix[top][i]);
        }
        top++;  // Move the top boundary down

        // Traverse from top to bottom along the right column
        for (int i = top; i <= bottom; i++) {
            // cout << matrix[i][right] << " ";
            // v.push_back(matrix[i][right]);
            s+=to_string(matrix[i][right]);
        }
        right--;  // Move the right boundary left

        // Check if there are remaining rows
        if (top <= bottom) {
            // Traverse from right to left along the bottom row
            for (int i = right; i >= left; i--) {
                // cout << matrix[bottom][i] << " ";
                // v.push_back(matrix[bottom][i]);
                s+=to_string(matrix[bottom][i]);
            }
            bottom--;  // Move the bottom boundary up
        }

        // Check if there are remaining columns
        if (left <= right) {
            // Traverse from bottom to top along the left column
            for (int i = bottom; i >= top; i--) {
                // cout << matrix[i][left] << " ";
                // v.push_back(matrix[i][left]);
                s+=to_string(matrix[i][left]);
            }
            left++;  // Move the left boundary right
        }

        cout<<s<<"\n";
    }
}

int main() {
    vector<vector<int>> matrix(n,vector<int>)

    cout << "Clockwise Spiral Order: ";
    spiralOrder(matrix);
    return 0;
}
