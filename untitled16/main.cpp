#include <iostream>

int main() {
    int matrix[6] = {3,34, 4, -2, -43, 23};
    int result=1;
    int temp;
    for (int i=0; i<6; ++i) {
        for (int j=1; j<6; ++j) {
            temp=matrix[i]+matrix[j];
            if (temp==result) {
                std::cout<<matrix[i]<<" "<<matrix[j];
                return 0;
            }
        }
    }
}
