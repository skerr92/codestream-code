//
// Created by seth Kerr on 2019-04-20.
//

#include <iostream>
 using namespace std;

class node {
public:
    int data;
    node *next;
    node(int d) {
        data = d;
        next = NULL;
    }
    node(int d, node *p) {
        data = d;
        next = p;
    }
    void print() {
        cout << data << endl;
    }

};


class LinkedList {
    node *head;
    node *tail;
public:
    void printLinkedList() {
        node *p = head;
        while (p != NULL) {
            p->print();
            p = p->next;
        }
    }

    void insertAtHead(int d) {
        node *temp = new node(d,head);
        head = temp;
    }

    void insertAtTail(int d) {
        // if linked list is empty
        if (head == NULL) {
            insertAtHead(d);
            tail = NULL;
        }
        if (head->next == NULL) {
            tail = new node(d);
            head->next = tail;
        }
        else {
            node *p = tail;
            tail = new node(d);
            p->next = tail;
        }
    }

    bool find(int d) {
        node *p = head;
        while (p != NULL) {
            if (p->data == d) {
                return true;
            }
            p = p->next;
        }
        return false;
    }

    bool isEmpty() {
        return head == NULL;
    }

    void removeAtHead() {
        if (head == NULL) return;
        node *p = head;
        head = head->next;
        delete p;
    }

    void removeAtTail() {
        if (head == NULL) return;
        node *p = head;
        while (p->next != tail) {
            p = p->next;
        }
        tail = p;
        tail->next = NULL;
        delete p;
    }

};

node* delete_head(node* root) {
    node *temp = root;
    temp = temp->next;
    delete root;
    return temp;
}

void delete_tail(node* root) {
    node *temp = root;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    delete temp;
}

class BTree {
public:
    int data;
    node *left;
    node *right;
    BTree(int d) {
        data = d;
        left = right = NULL;
    }
};

void add_leaf(BTree root, BTree leaf) {
    if (root == NULL) root = leaf;
    if (leaf->data < root->data) {
        if (root->left != NULL) add_leaf(root->left, leaf);
        else root->left = leaf;
    } else if (leaf->data > root-data) {
        if (root->right != NULL) add_leaf(root->right, leaf);
        else root->right = leaf;
    }
}

void inorder(BTree *root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    BTree root = new BTree(10);
    BTree p = new BTree(7);
    BTree r = new BTree(15);

    add_leaf(root, p);
    add_leaf(root, r);

    inorder(root);


};
