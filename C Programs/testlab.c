#include <stdio.h>

// -------------------------------------------------
// bst
typedef struct node{
    int value;
    struct node* left;
    struct node* right;
}node;

node* insert(node* root, int value){
    if (root == NULL){
        struct node* new_node = create_node();
        return new_node;
    }

    if (value<root->value)
        root->left = insert(root->left, value);
    else if (value>root->value)
        root->right = insert(root->right, value);
    return root;
}

node* delete(node* root, int value){
    if (root==NULL) return root;

    if (value<root->value)
        root->left = delete(root->left, value);
    else if (value>root->value)
        root->right = delete(root->right, value);
    else{
        if (root->left == NULL){
            node* temp = root->right;
            free(root);
            return temp;
        }
        if (root->right==NULL){
            node* temp = root->left;
            free(root);
            return temp;
        }

        node* next = root->right;
        for(;next->left!=NULL; next=next->left);

        root->value = next->value;
        root->right = delete(root->right, next->value);
    }
    return root;
}

void inorder(node* root){
    if (root!=NULL){
        inorder(root->left);
        printf("%d ", root->value);
        inorder(root->right);
    }
}
// ---------------------------------------------

// Heap
#define max 20
int heap[max], size = 0;

void heapify(int i){
    int min = i;
    int left = 2*i+1;
    int right = 2*i-1;

    if (left<size && heap[left]<heap[min])
        min = left;
    if (right<size && heap[right]<heap[min])
        min = right;
    if (min!=i){
        swap(&heap[min], &heap[i]);
        heapify(min);
    }
}

void insert(int value){
    if (size>=max){
        printf("heap overflow");
        return;
    }
    heap[size++] = value;

    for(int i=size-1; i>=0; i = (i-1)/2){
        if (heap[i]<heap[(i-1)/2])
            swap(&heap[i], &heap[(i-1)/2]);
    }
}

int delete(){
    int value = heap[0];

    heap[0] = heap[--size];
    heapify(0);

    return value;
}

// -------------------------------------------------
// dfs

int graph[20][20], v;

void _dfs(int graph[][], int source, int visited[]){
    // visit source
    visited[source] = 1;
    printf("%d ", source);

    // visit every unvisited neighbour vertices of source
    for(int i=0; i<v; i++)
        if (!visited[i] && graph[source][i])
            _dfs(graph, i, visited);
}

void dfs(int graph[][], int v){
    int visited[v];
    for(int i=0; i<v; i++) visited[i] = 0;

    for(int i=0; i<v; i++) _dfs(graph, i, visited);
}

// --------------------------------------------------
// bfs

void bfs(int graph[][], int source, int visited[]){

}

void _bfs(){
    int q[100], f=0, r=0;

    q[rear++] = source;

    whille (front<rear){
        int i = q[front++];
        visited[i] = 1;
        printf("%d ", i);

        for(int j=0; j<v; j++)
            if (!visited[j] && graph[i][j])
                q[rear++] = j;
                visited[j] = 1
    }
}