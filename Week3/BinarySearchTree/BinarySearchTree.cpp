//
// Created by Jan Mouwes on 01/05/2020.
//

#include <iostream>
#include "BinarySearchTree.h"


void BinarySearchTree::insert(int x, TreeNode *source) {
    TreeNode** target;
    if (x < source->info) {
        target = &source->left;
    } else if (x > source->info) {
        target = &source->right;
    } else {
        return;
    }

    if (*target != nullptr) {
        insert(x, *target);
    } else {
        *target = new TreeNode();
        (*target)->info = x;
    }
}

void BinarySearchTree::insert(int x) {
    if (this->root != nullptr) {
        this->insert(x, this->root);
    } else {
        this->root = new TreeNode();
        this->root->info = x;
    }
}

int BinarySearchTree::node_depth(TreeNode *node, int currentDepth) {
    if (node == nullptr) {
        return currentDepth;
    } else {
        int leftDepth = node_depth(node->left, currentDepth + 1);
        int rightDepth = node_depth(node->right, currentDepth + 1);

        return leftDepth > rightDepth ? leftDepth : rightDepth;
    }
}

int BinarySearchTree::depth() {
    return node_depth(this->root, 0);
}

bool BinarySearchTree::is_present(int x, TreeNode *node) {
    if (node == nullptr) {
        return false;
    }

    if (x < node->info) {
        return is_present(x, node->left);
    } else if (x > node->info) {
        return is_present(x, node->right);
    } else {
        return true;
    }
}

bool BinarySearchTree::is_present(int x) {
    return is_present(x, this->root);
}

void BinarySearchTree::traverse_node(TreeNode *node) {
    if (node != nullptr) {
        traverse_node(node->left);
        std::cout << node->info << ' ';
        traverse_node(node->right);
    }
}

void BinarySearchTree::traverse() {
    traverse_node(this->root);
}

void BinarySearchTree::print() {
    traverse();
}

