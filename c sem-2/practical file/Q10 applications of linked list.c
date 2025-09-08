#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void display(struct node* start);
void insert_end(struct node** start, int val);
void reverse(struct node** start);
void find(struct node* start, int key);
void merge(struct node** start1, struct node** start2, struct node** start3);

int main() {
    struct node* start1 = NULL;
    struct node* start2 = NULL;
    struct node* start3 = NULL;

    int choice;
    int val;
    int key;
    int flag = 1;

    insert_end(&start1, 10);
    insert_end(&start1, 20);
    insert_end(&start2, 40);
    insert_end(&start2, 50);
    insert_end(&start2, 60);

    while (flag == 1) {
        printf("\nLinked list applications:\n");
        printf("1) Insert a node\n");
        printf("2) Find a node\n");
        printf("3) Merge two linked lists\n");
        printf("4) Reverse a linked list\n");
        printf("5) Exit\nYour choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter a value to be inserted: ");
                scanf("%d", &val);
                insert_end(&start1, val);
                printf("Value added.\n");
                break;
            case 2:
                printf("Enter a value to be searched: ");
                scanf("%d", &val);
                find(start1, val);
                break;
            case 3:
                merge(&start1, &start2, &start3);
                printf("Linked list after merging: ");
                display(start3);
                break;
            case 4:
                printf("Which linked list do you want to reverse (1 or 2): ");
                scanf("%d", &val);
                if (val == 1) {
                    reverse(&start1);
                    printf("Reversed linked list 1: ");
                    display(start1);
                } else {
                    reverse(&start2);
                    printf("Reversed linked list 2: ");
                    display(start2);
                }
                break;
            case 5:
                printf("<<< END >>>");
                flag--;
                break;
            default:
                printf("Invalid value. Try again.\n");
                break;
        }
    }
    
    return 0;
}

void display(struct node* start) {
    struct node* temp = start;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void insert_end(struct node** start, int val) {
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->data = val;
    n->next = NULL;
    
    if (*start == NULL) {
        *start = n;
        return;
    }
    
    struct node* temp = *start;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

void reverse(struct node** start) {
    struct node* prev = NULL;
    struct node* curr = *start;
    struct node* nex;

    while (curr != NULL) {
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }
    *start = prev;
}

void find(struct node* start, int key) {
    struct node* temp = start;
    while (temp != NULL) {
        if (temp->data == key) {
            printf("Element found.\n");
            return;
        }
        temp = temp->next;
    }
    printf("Element not found.\n");
}

void merge(struct node** start1, struct node** start2, struct node** start3) {
    struct node* i = *start1;
    struct node* j = *start2;
    struct node* k = *start3;

    while (i != NULL && j != NULL) {
        if (i->data < j->data) {
            insert_end(start3, i->data);
            i = i->next;
        } else {
            insert_end(start3, j->data);
            j = j->next;
        }
    }

    while (i != NULL) {
        insert_end(start3, i->data);
        i = i->next;
    }

    while (j != NULL) {
        insert_end(start3, j->data);
        j = j->next;
    }
}
