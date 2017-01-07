//
// Created by Miguel Rentes on 05/01/2017.
//
#include "../headers/day0.h"

int main(void) {
    // obtaining the number of elements from cin
    string number_of_elements_string = "";
    getline(cin, number_of_elements_string);
    int number_of_elements = atoi(number_of_elements_string.c_str());

    // putting all elements in a vector
    unsigned int n;
    vector<unsigned int> nums;
    vector<unsigned int> weights;
    for(int i = 0 ; i < number_of_elements; ++i)
        if(cin >> n)
            nums.push_back(n);
    for(int i = 0 ; i < number_of_elements; ++i)
        if(cin >> n)
            weights.push_back(n);
    float weighted_mean;
    unsigned int weighted_mean_numerator = 0;
    unsigned int weighted_mean_denominator = 0;
    for(int i = 0 ; i < number_of_elements; ++i) {
        weighted_mean_numerator += nums[i] * weights[i];
        weighted_mean_denominator += weights[i];
    }
    weighted_mean = (float) weighted_mean_numerator / weighted_mean_denominator;

    // printing the result
    cout.precision(1);
    cout << fixed << weighted_mean << endl;
    return EXIT_SUCCESS;
}
