//
// Created by Vladislav on 14.05.2021.
//

#ifndef TESTS_COLLECTIONS_H
#define TESTS_COLLECTIONS_H


#include <vector>

class Collections {

public:

    static void bubbleSort(std::vector<int> *list) {
        int n = list->size();
        bool swapped;
        for (int i = 0; i < n - 1; i++) {
            swapped = false;
            for (int j = 0; j < n - i - 1; j++) {
                int curr = list->at(j);
                int next = list->at(j + 1);
                if (curr > next) {
                    (*list)[j] = next;
                    (*list)[j + 1] = curr;
                    swapped = true;
                }
            }
            // IF no two elements were swapped by inner loop, then break
            if (!swapped)
                break;
        }
    }

};


#endif //TESTS_COLLECTIONS_H
