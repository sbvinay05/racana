#include <iostream>

struct Node {
    int data;
    Node* next;
    Node(int data) : data(data), next(nullptr) {}
};

void deleteNode(Node* nodeToDelete) {
    if (nodeToDelete == nullptr)
        return;

    Node* nextNode = nodeToDelete->next;

    if (nextNode == nullptr) {
        // If the node is the last node in the list, it cannot be deleted without knowing the head.
        std::cout << "Cannot delete the last node without knowing the head." << std::endl;
        return;
    }

    nodeToDelete->data = nextNode->data;
    nodeToDelete->next = nextNode->next;

    delete nextNode;
}

int main() {
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    // Assuming we want to delete node2
    deleteNode(node2);

    // Traversing the modified list
    Node* current = node1;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }

    
    return 0;
}
