#include <iostream>

struct Linked
{
    int val;
    struct Linked* next;
};

int main()
{
    Linked* head = new Linked();
    Linked* temp = head;

    for (int i = 0; i < 4; i++)
    {
        temp->next = new Linked();
        std::cin >> temp->next->val;
        temp = temp->next;
    }
    temp->next = nullptr;

    temp = head->next;
    while (temp != nullptr)
    {
        std::cout << temp->val << " ";
        temp = temp->next;
    }

    // Deallocate memory
    temp = head;
    while (temp != nullptr)
    {
        Linked* next = temp->next;
        delete temp;
        temp = next;
    }

    return 0;
}
