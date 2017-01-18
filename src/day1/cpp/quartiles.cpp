//
// Created by Miguel Rentes on 18/01/2017.
//

#include "../headers/day1.h"

int main(void) {
    unsigned int number_elements;
    cin >> number_elements;
    unsigned int array[number_elements];
    for (int i = 0; i < number_elements; i++) {
        cin >> array[i];
    }

    std::sort(array, array + number_elements);

    // calculate the quartiles
    // Q1
    float q1;
    if (number_elements % 2 == 0) {
        q1 = (float) array[(number_elements/4)];
    } else {
        if ((number_elements/2) %2 == 0)
            q1 = (float) (array[(number_elements/4)-1] + array[number_elements/4])/2;
        else q1 = (float) array[number_elements/4];
    }

    // Q2
    // calculating the median
    float q2;
    if (number_elements % 2 == 0) {
        q2 = (float) (array[(number_elements/2)-1] + array[(number_elements/2)])/2;
    } else q2 = (float) array[number_elements/2];

    // Q3
    float q3;
    if (number_elements % 2 == 0) {
        q3 = (float) array[(number_elements/2)+(number_elements/4)];
    } else {
        if ((number_elements/2) %2 == 0)
            q3 = (float) (array[(number_elements/2)+(number_elements/4)] + array[(number_elements/2)+(number_elements/4)+1])/2;
        else q3 = (float) array[(number_elements/2)+(number_elements/4)+1];
    }

    cout << q1 << endl;
    cout << q2 << endl;
    cout << q3 << endl;

    return EXIT_SUCCESS;
}