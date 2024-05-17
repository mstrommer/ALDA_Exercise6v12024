// Test definitions. Do NOT edit this file!

//#define CATCH_CONFIG_MAIN // defines main() automatically
#include "lib/catch.hpp"
#include "bintree.hpp"

// =====================
// Bintree Testcases
// ---------------------

TEST_CASE("Test1", "insert")
{
    binTree *tree = t_init();
    insert(tree, 1, "123");
    INFO("No Node was inserted into the tree");
    REQUIRE(tree->root != nullptr);
}

TEST_CASE("Test2", "insert")
{
    binTree *tree = t_init();
    insert(tree, 1, "Mon Mothma");
    REQUIRE(tree->root != nullptr);
    INFO("Data needs to be inserted as C-String!");
    REQUIRE(strlen(tree->root->data) + 1 == 11);
}

TEST_CASE("Test3", "insert")
{
    binTree *tree = t_init();
    insert(tree, 3, "Obin Wan");
    REQUIRE(tree->root != nullptr);
    insert(tree, 1, "Leia Organa");
    insert(tree, 6, "Boba Fett ");
    INFO("Testing insert for keys: 3 - 1 - 6.");
    REQUIRE(tree->root->left != nullptr);
    REQUIRE(tree->root->right != nullptr);
    REQUIRE(tree->root->right->key == 6);
    REQUIRE(tree->root->left->key == 1);
}

TEST_CASE("Test4", "insert")
{
    binTree *tree = t_init();
    insert(tree, 5, "Obi-Wan Kenobi");
    REQUIRE(tree->root != nullptr);
    insert(tree, 4, "Luke Skywalker");
    insert(tree, 3, "Ahsoka Tano");
    INFO("Testing insert for keys: 5 - 4 - 3.");
    REQUIRE(tree->root->left != nullptr);
    REQUIRE(tree->root->left->key == 4);
    REQUIRE(tree->root->left->left->key == 3);
}

TEST_CASE("Test5", "treeDepth")
{
    binTree *tree = t_init();
    insert(tree, 3, "Jane Doe");
    insert(tree, 1, "Jane Doe");
    insert(tree, 2, "Jane Doe");
    insert(tree, 4, "Jane Doe");
    insert(tree, 6, "John Doe");
    insert(tree, 5, "John Doe");
    insert(tree, 7, "John Doe");
    int td = treeDepth(tree->root);
    REQUIRE(td == 4);
}

TEST_CASE("Test6", "Minimum")
{
    binTree *tree = t_init();
    insert(tree, 3, "Jane Doe");
    insert(tree, 1, "Jane Doe");
    insert(tree, 2, "Jane Doe");
    insert(tree, 4, "Jane Doe");
    insert(tree, 6, "John Doe");
    insert(tree, 5, "John Doe");
    insert(tree, 7, "John Doe");
    int min = minKey(tree->root);
    REQUIRE(min == 1);
}

TEST_CASE("Test7", "Maximum")
{
    binTree *tree = t_init();
    insert(tree, 3, "Jane Doe");
    insert(tree, 1, "Jane Doe");
    insert(tree, 2, "Jane Doe");
    insert(tree, 4, "Jane Doe");
    insert(tree, 6, "John Doe");
    insert(tree, 5, "John Doe");
    insert(tree, 7, "John Doe");
    int max = maxKey(tree->root);
    REQUIRE(max == 7);
}

TEST_CASE("Test8", "PostOrder")
{
    binTree *tree = t_init();
    insert(tree, 3, "Jane Doe");
    insert(tree, 1, "Jane Doe");
    insert(tree, 2, "Jane Doe");
    insert(tree, 4, "Jane Doe");
    insert(tree, 6, "John Doe");
    insert(tree, 5, "John Doe");
    insert(tree, 7, "John Doe");
    postOrder(tree->root);
    char buffer[100];
    copyBufferPO(buffer);
    INFO("Testing post Order notation. Your output is: " << buffer);
    REQUIRE(strcmp(buffer, "2157643") == 0);
}

TEST_CASE("Test9", "LevelOrder")
{
    binTree *tree = t_init();
    insert(tree, 20, "Jane Doe");
    insert(tree, 10, "Jane Doe");
    insert(tree, 1, "Jane Doe");
    insert(tree, 40, "Jane Doe");
    insert(tree, 15, "John Doe");
    insert(tree, 25, "John Doe");
    insert(tree, 50, "John Doe");
    levelOrder(tree->root);
    char buffer[100];
    copyBufferLO(buffer);
    INFO("Testing level Order notation. Your output is: " << buffer);
    REQUIRE(strcmp(buffer, "2010401152550") == 0);
}