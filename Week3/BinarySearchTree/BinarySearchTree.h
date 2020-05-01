//
// Created by Jan Mouwes on 01/05/2020.
//

#ifndef HUISWERK_BINARYSEARCHTREE_H
#define HUISWERK_BINARYSEARCHTREE_H

struct TreeNode {
    int info;

    TreeNode* left;

    TreeNode* right;
};

class BinarySearchTree {

private:
    TreeNode* root = nullptr;

    void insert(int x, TreeNode* source);

    int node_depth(TreeNode* node, int currentDepth);

    bool is_present(int x,TreeNode* node);

    void traverse_node(TreeNode* node);

public:
    void insert(int x);

    int depth();

    bool is_present(int x);

    void traverse();

    void print();
};


#endif //HUISWERK_BINARYSEARCHTREE_H
