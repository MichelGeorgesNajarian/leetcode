/**
 * https://leetcode.com/problems/valid-parentheses/
 * Runtime: 0 ms, faster than 100.00% of C online submissions for Valid Parentheses.
 * Memory Usage: 7.1 MB, less than 15.38% of C online submissions for Valid Parentheses.
 */
struct Node {
    char value;
    struct Node* next;
} *node_p;

struct LinkedList {
    int size;
    struct Node* head;
    struct Node* tail;
} *linkedlis_p;

void push (struct LinkedList *ll, char data) {
    ll->size += 1;
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->value = data;
    newNode->next = ll->head->next;
    ll->head->next = newNode;
}

char pop (struct LinkedList *ll) {
    if (ll->size == 0) {
        return NULL;
    }
    ll->size -= 1;
    struct Node *temp = ll->head->next;
    ll->head->next = temp->next;
    char ret = temp->value;
    free(temp);
    return ret;
}

void freeLinkedList(struct LinkedList *ll) {
    struct Node *head = ll->head;
    while (head->next != ll->tail) {
        struct Node * toDelete = head->next;
        head->next = toDelete->next;
        free(toDelete);
    }
    ll->size = 0;
    free(ll->tail);
    free(ll->head);
}

bool isValid(char * s){
    int i = 0;
    int size = strlen(s);
    struct LinkedList *ll = malloc(sizeof(struct LinkedList));
    struct Node *head = malloc(sizeof(struct Node));
    struct Node *tail = malloc(sizeof(struct Node));
    ll->head = head;
    ll->tail = tail;
    ll->size = 0;
    head->next = tail;
    head->value = NULL;
    tail->next = NULL;
    tail->value = NULL;
    bool ret = true;
    for (i = 0; i < size; i++) {
        if (s[i] == '(') {
            push(ll, ')');
        } else if (s[i] == '{') {
            push(ll, '}');
        } else if (s[i] == '[') {
            push(ll, ']');
        } else if (s[i] == ')' | s[i] == ']' | s[i] == '}') {
            if (s[i] != pop(ll)) {
                ret = false;
                break;
            }
        }
    }
    if (ll->size != 0) {
        ret = false;
    }
    freeLinkedList(ll);
    free(ll);
    return ret;
}
