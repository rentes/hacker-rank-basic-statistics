//
// Created by Miguel Rentes on 11/01/17.
//

#include "../headers/day1.h"

int main(void) {
    // first we calculate the mean
    unsigned int number_of_elements;
    vector<unsigned int> nums;
    cin >> number_of_elements;
    for(int i = 0 ; i < number_of_elements; ++i) {
        unsigned int n;
        if (cin >> n)
            nums.push_back(n);
    }

    // calculating the mean
    unsigned int sum = 0;
    for(int i = 0 ; i < number_of_elements; ++i)
        sum += nums[i];
    float mean = (float) sum / number_of_elements;

    // Next, we calculate the squared distance from the mean
    float sum_square_distances = 0.0f;
    for(int i = 0 ; i < number_of_elements; ++i) {
        sum_square_distances += pow((nums[i] - mean), 2);
    }

    // Now we can compute the standard deviation
    float standard_deviation = (float) sqrt(sum_square_distances / number_of_elements);
    cout.precision(1);
    cout << fixed << standard_deviation << endl;
    return EXIT_SUCCESS;
}