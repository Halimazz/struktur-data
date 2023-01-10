#include <iostream>
using namespace std;

struct  Tree
{
    char huruf;
    Tree *left;
    Tree *right;
};

Tree *leaf1,*leaf2,*leaf3,*leaf4,*node;

Tree *addNode(char data){
 node = new Tree();
 node->huruf = data;
 node->left =NULL;
 node->right =NULL;
 return node;
}
void tambahCil(Tree *nodeBaru, string pos){
    if(pos == "kiri"){
        
    }
}

void menu( pil){
    char data;
    Tree *inputan;
    switch(pil){
        case 1:
            cout << "Masukan satu Huruf :";
            cin >>data;
            inputan = addNode(data);
            tambahCil

    }
}

int main(){
  int pilih;
  do{
    cout <<
  }
  while();

}