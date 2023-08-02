#include <iostream>

using namespace std;

int get_max_val(vector<int> num_list)
{

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

int main()
{

    vector<int> num_list(4);
    num_list.at(0) = 5;
    num_list.at(1) = 3;
    num_list.at(2) = 33;
    num_list.at(3) = 1;

    cout << get_max_val(num_list) << endl;
    cout << get_min_val(num_list) << endl;

    return 0;
}
