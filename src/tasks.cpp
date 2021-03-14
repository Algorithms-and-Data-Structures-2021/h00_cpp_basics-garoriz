#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {
    if (lhs && rhs) {
        int t = *lhs;
        *lhs = *rhs;
        *rhs = t;
    }
}

// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {
    if (num_cols < 1 || num_rows < 1) {
        return nullptr;
    }
    int **array_2d = new int *[num_rows];
    for (int i = 0; i < num_rows; i++) {
        array_2d[i] = new int[num_cols];
    }
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            array_2d[i][j] = init_value;
        }
    }
    return array_2d;
}

// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    if (!arr_2d_source || !arr_2d_target || num_rows < 0 || num_cols < 0) {
        return false;
    }
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            arr_2d_target[i][j] = arr_2d_source[i][j];
        }
    }
    return true;
}

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    vector<int> arr_t;
    for (int i = arr.size() - 1; i >= 0; --i) {
        arr_t.push_back(arr[i]);
    }
    for (int i = 0; i < arr.size(); ++i) {
        arr[i] = arr_t[i];
    }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    if (!arr_begin || !arr_end) {
    } else {
        while (arr_begin < arr_end) {
            int t = *arr_begin;
            *arr_begin = *arr_end;
            *arr_end = t;
            arr_begin++;
            arr_end--;
        }
    }
}

// Задание 6
int *find_max_element(int *arr, int size) {
    if (!arr || size < 1) {
        return nullptr;
    }
    int i_max = *arr;
    int *pointer_to_max = arr;
    for (int i = 1; i < size; ++i) {
       if (*(arr + i) > i_max) {
           i_max = *(arr + i);
           pointer_to_max = arr + i;
       }
    }
    return pointer_to_max;
}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    vector<int> odd_numbers {};
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 != 0) {
            odd_numbers.push_back(arr[i]);
        }
    }
    return odd_numbers;
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    vector<int> common_elements;
    for (int i = 0; i < arr_a.size(); ++i) {
        for (int j = 0; j < arr_b.size(); ++j) {
            if (arr_a[i] == arr_b[j]) {
                common_elements.push_back(arr_a[i]);
            }
        }
    }
    return common_elements;
}