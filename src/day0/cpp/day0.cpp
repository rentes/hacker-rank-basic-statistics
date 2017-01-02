//
// Created by Miguel Rentes on 01/01/17.
//
#include "../headers/day0.h"

int main(void) {
    // obtaining the number of elements from cin
    string number_of_elements_string = "";
    unsigned int number_of_elements = 0;
    getline(cin, number_of_elements_string);
    number_of_elements = atoi(number_of_elements_string.c_str());

    // putting all elements in a vector
    unsigned int n;
    vector<unsigned int> nums;
    for(int i ; i < number_of_elements; ++i)
        if(cin >> n)
            nums.push_back(n);

    // calculating the mean
    float mean = 0.0f;
    unsigned int sum = 0;
    for(int i ; i < number_of_elements; ++i)
        sum += nums[i];
    mean = (float) sum / number_of_elements;

    // calculating the median
    float median = 0.0f;
    sort(nums.begin(), nums.end());
    if (number_of_elements % 2 == 0) {
        median = (float) (nums[(number_of_elements/2)-1] + nums[(number_of_elements/2)]) / 2;
    } else median = (float) nums[number_of_elements/2];

    // calculating the mode
    unsigned int mode = 0;
    if (number_of_elements == 1 || number_of_elements == 2)
        mode = nums[1];
    else {
        map<unsigned int, unsigned int> num_occurrences;
        for(int i ; i < number_of_elements; ++i) {
            map<unsigned int, unsigned int>::iterator it = num_occurrences.find(nums[i]);
            if (it != num_occurrences.end()) {
                num_occurrences[nums[i]]++;
            } else {
                num_occurrences[nums[i]] = 1;
            }
        }
        map<unsigned int, unsigned int>::iterator it;
        unsigned currentMax = 0;
        for (it = num_occurrences.begin(); it != num_occurrences.end(); ++it) {
            if (it ->second > currentMax) {
                mode = it->first;
                currentMax = it->second;
            }
        }
    }

    // printing the results
    cout.precision(1);
    cout << fixed << mean << endl;
    cout << fixed << median << endl;
    cout << mode << endl;
    return EXIT_SUCCESS;
}