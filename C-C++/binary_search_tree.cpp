#include<iostream>

using namespace std;

class Tree
{
public:
    int value;
    Tree *left;
    Tree *right;

};

Tree *root=NULL;

Tree *newNode(int val){
        Tree *n= new Tree;
        n->value=val;
        n->left=NULL;
        n->right=NULL;
        return n;
    }

Tree *input(Tree *inputNode, int val){
    if(inputNode==NULL){
        return newNode(val);
    }

    if(val<(inputNode->value)){
        inputNode->left=input(inputNode->left,val);
    }else if(val>(inputNode->value)){
        inputNode->right=input(inputNode->right,val);
    }
    return inputNode;
}

Tree *minValue(Tree *currentN)
{
    while(currentN->left!= NULL) {
        currentN = currentN->left;
    }
    return currentN;
}

Tree *Delete(Tree *root, int val)
{
    Tree *temp;

    if(root==NULL) {
        return root;
    }

    if(val<root->value){
        root->left = Delete(root->left, val);
    }else if(val > root->value){
        root->right = Delete(root->right, val);
    }else{
        if(root->left==NULL)
        {
            temp = root->right;
            return temp;
        }
        else if (root->right == NULL)
        {
            temp = root->left;
            return temp;
        }else{
            temp = minValue(root->right);
            root->value = temp->value;
            root->right = Delete(root->right, temp->value);
        }

    }
    return root;
}


int print_tree(Tree *root)
{

    if(root!=NULL){
        print_tree(root->left);
        cout<<root->value<<", ";;
   //     if(root->right!=NULL && root->left!=NULL){cout<<".";}else{cout<<", ";}
        print_tree(root->right);

    }

}


int main(){

    cout<<"\t\t\t.+++++++++++++++++++++++++++++++++++++++++++++++++++++++."<<endl;
    cout<<"\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<"\t\t\t++           Binary Search Tree Implementation         ++"<<endl;
    cout<<"\t\t\t++                         By                          ++"<<endl;
    cout<<"\t\t\t++                Rokan Chowdhury Onick                ++"<<endl;
    cout<<"\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<"\t\t\t`+++++++++++++++++++++++++++++++++++++++++++++++++++++++`"<<endl;
    cout<<endl;

    root=input(root, 80);

    input(root, 200);
    input(root, 50);
    input(root, 10);
    input(root, 120);
    print_tree(root);




    cout<<endl;
root=Delete(root, 80);
Delete(root, 10);
print_tree(root);
}
