#include <iostream>

using namespace std;

int get_max_val(vector<int> num_list)
{

    cout << "coming from looped max func " << endl;

    int max_val = num_list.at(0);
    for (int i = 1; i < num_list.size(); i++)
    {
        if (num_list.at(i) > max_val)
        {
            max_val = num_list.at(i);
        }
    }
    return max_val;
}

int get_min_val(vector<int> num_list)
{

    cout << "coming from looped min func " << endl;

    int min_val = num_list.at(0);
    for (int i = 1; i < num_list.size(); i++)
    {
        if (num_list.at(i) < min_val)
        {
            min_val = num_list.at(i);
        }
    }
    return min_val;
}

int get_max_val_range_based(vector<int> num_list)
{
    cout << "coming from ranged max func " << endl;

    int max_val = num_list.at(0);
    for (int num : num_list)
    {
        if (num > max_val)
        {
            max_val = num;
        }
    }
    return max_val;
}

int get_min_val_range_based(vector<int> num_list)
{
    cout << "coming from ranged min func " << endl;

    int min_val = num_list.at(0);
    for (int num : num_list)
    {
        if (num < min_val)
        {
            min_val = num;
        }
    }
    return min_val;
}

int main()
{

    vector<int> num_list(4);
    num_list.at(0) = 5;
    num_list.at(1) = 3;
    num_list.at(2) = 33;
    num_list.at(3) = 1;

    cout << get_max_val(num_list) << endl;
    cout << get_min_val(num_list) << endl;
    cout << get_max_val_range_based(num_list) << endl;
    cout << get_min_val_range_based(num_list) << endl;

    return 0;
}
