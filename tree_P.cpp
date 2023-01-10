#include <iostream>
using namespace std;

struct  Tree
{
    int data;
    Tree *left;
    Tree *right;
};

Tree *leaf1, *leaf2, *leaf3,*leaf4;
void PreOrder(Tree *current) {
  if (current != NULL) {
    cout << " " << current->data;
    PreOrder(current->left);
    PreOrder(current->right);
  }
}

int main(){
    leaf1= new Tree();
    leaf1->data =1;
    leaf1->left =NULL;
    leaf1->right =NULL;

     leaf2 = new Tree();
    leaf2->data =2;
    leaf2->left =NULL;
    leaf2->right =NULL;

     leaf3 = new Tree();
    leaf3->data =3;
    leaf3->left =NULL;
    leaf3->right =NULL;
    

     leaf4 = new Tree();
    leaf4->data =4;
    leaf4->left =NULL;
    leaf4->right =NULL;
  

    leaf1->left =leaf2;
    leaf1->right =leaf3;
     leaf3->right =leaf4;

   cout<<"PreOrder" ;
   PreOrder(leaf1);

}
