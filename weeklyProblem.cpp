#include <iostream>
#include <vector>
using namespace std;

// Function to concatenate two arrays
void concatenate_arrays(int N, const vector<int>& A, const vector<int>& B) {
    // Print array B elements first
    for (int i = 0; i < N && i < B.size(); i++) {
        cout << B[i] << " ";
    }
    
    // Print array A elements next
    for (int i = 0; i < N && i < A.size(); i++) {
        cout << A[i] << " ";
    }
}

int main() {
    int N;
    cin >> N;  // Size of the arrays
    
    vector<int> A(N), B(N);
    
    // Input for array A
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    // Input for array B
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    
    // Call the function to concatenate arrays
    concatenate_arrays(N, A, B);
    
    return 0;
}
