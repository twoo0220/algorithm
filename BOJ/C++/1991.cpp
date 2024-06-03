#include <iostream>
#include <string>

int tree[26][2]{};

void preOrder(int value)
{
    if (value == -1) return;
    std::cout << static_cast<char>(value + 'A');
    preOrder(tree[value][0]);
    preOrder(tree[value][1]);
}

void inOrder(int value)
{
    if (value == -1) return;
    inOrder(tree[value][0]);
    std::cout << static_cast<char>(value + 'A');
    inOrder(tree[value][1]);
}

void postOrder(int value)
{
    if (value == -1) return;
    postOrder(tree[value][0]);
    postOrder(tree[value][1]);
    std::cout << static_cast<char>(value + 'A');
}

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int size = 0;
    std::cin >> size;

    for (int i = 0; i < size; ++i)
    {
        char top, left, right;
        std::cin >> top >> left >> right;
        if (left == '.')
        {
            tree[top - 'A'][0] = -1;
        }
        else
        {
            tree[top - 'A'][0] = left - 'A';
        }

        if (right == '.')
        {
            tree[top - 'A'][1] = -1;
        }
        else
        {
            tree[top - 'A'][1] = right - 'A';
        }
    }

    preOrder(0);
    std::cout << "\n";
    inOrder(0);
    std::cout << "\n";
    postOrder(0);
    
    return 0;
}
