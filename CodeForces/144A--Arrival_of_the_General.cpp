#include <iostream>
int main (void) {
    int n, s, swaps;
    std:: cin >> n;

    std:: cin >> s;
    int largest = s;
    int largestPosition;
    std:: cin >> s;
    int smallest = s;
    int smallestPosition;

    if (largest >= smallest) {
        largestPosition = 0;
        smallestPosition = 1;
    } else {
        largest = largest + smallest;
        smallest = largest - smallest;
        largest = largest - smallest;

        largestPosition = 1;
        smallestPosition = 0;
    }

    for (int i=2; i<n; i++) {
        std:: cin >> s;
        if (s > largest) {
            largest = s;
            largestPosition = i;
        } else if (s <= smallest) {
            smallest = s;
            smallestPosition = i;
        }
    }

    // when smallest is after largest, we don't need to do minus 1
    swaps = largestPosition + (n - (smallestPosition+1) - (largestPosition > smallestPosition));
    std:: cout << swaps << std:: endl;
    return 0;
}
