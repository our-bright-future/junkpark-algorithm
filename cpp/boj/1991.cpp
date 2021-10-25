#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false);
#define endl "\n";

using namespace std;

// node를 구조화!
typedef struct node{
    // 나 자신을 담는 정보
    int info;
    // 노드를 가리키는 포인터
    node* left;
    node* right;
}node;

struct node nodes[27];

int n;

void preorder(node V){
    cout << (char)(V.info + 'A');
    if (V.left != NULL){
        // left, right가 포인터기 때문에 *을 통해 어딘지 불러줘야함!
        preorder(*V.left);
    }
    if (V.right != NULL){
        preorder(*V.right);
    }
}

void inorder(node V){
    if (V.left != NULL){
        inorder(*V.left);
    }

    cout << (char)(V.info + 'A');

    if (V.right != NULL){
        inorder(*V.right);
    }
}

void postorder(node V){
    if (V.left != NULL){
        postorder(*V.left);
    }
    if (V.right != NULL){
        postorder(*V.right);
    }
    cout << (char)(V.info + 'A');
}

int main() {
    fast_cin;
    cin >> n;
    char a, b, c;
    // 나 자신의 정보로 초기화
    for (int i = 0; i < n; i++){
        nodes[i].info = i;
    }

    for (int i = 1; i <= n; i++){
        cin >> a >> b >> c;
        // 자식 노드가 있으면 &nodes[b-'A']로 주소를 left에 넣어줌!
        if (b != '.'){
            nodes[a-'A'].left = &nodes[b-'A'];
        } else {
            nodes[a-'A'].left = NULL;}

        if (c != '.'){
            nodes[a-'A'].right = &nodes[c-'A'];
        } else {
            nodes[a-'A'].right = NULL;
        }
    }

    preorder(nodes[0]);
    cout << endl;
    inorder(nodes[0]);
    cout << endl;
    postorder(nodes[0]);
    cout << endl;

}