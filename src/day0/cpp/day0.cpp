//
// Created by Miguel Rentes on 01/01/17.
//
#include "../headers/day0.h"

int main(void) {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string N = "";
    unsigned int number_of_elements = 0;
    getline(cin, N);
    number_of_elements = atoi(N.c_str());

    unsigned int n;
    vector<unsigned int> nums;
    for(int i ; i < number_of_elements; ++i)
        if(cin >> n)
            nums.push_back(n);

    // mean
    float mean = 0.0f;
    unsigned int sum = 0;
    for(int i ; i < number_of_elements; ++i)
        sum += nums[i];
    mean = (float) sum / number_of_elements;

    // median
    float median = 0.0f;
    sort(nums.begin(), nums.end());
    if (number_of_elements % 2 == 0) {
        median = (float) (nums[(number_of_elements/2)-1] + nums[(number_of_elements/2)]) / 2;
    } else median = (float) nums[number_of_elements/2];

    //for(int i ; i < number_of_elements; ++i)
    //    cout << nums[i] << endl;

    // mode
    unsigned int mode = 0;
    if (number_of_elements == 1 || number_of_elements == 2)
        mode = nums[1];
    else {

    }

    cout.precision(1);
    cout << fixed << mean << endl;
    cout << fixed << median << endl;
    return EXIT_SUCCESS;
}