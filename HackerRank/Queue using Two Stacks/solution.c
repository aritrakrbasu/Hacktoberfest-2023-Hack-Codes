//    Author        : Matheus Costa (mathocosta)
//    Question Link : https://www.hackerrank.com/challenges/queue-using-two-stacks/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

int parse_int(char*);

/* Structs declaration */

struct node {
    int data;
    struct node *next;
};

struct queue {
    struct node *inbox, *outbox;
};

/* Stack methods */

void push_to_stack(struct node **stack, int data) {
    struct node *new_node = (struct node*) malloc(sizeof(struct node));

    new_node->data = data;
    new_node->next = *stack;
    *stack = new_node;
}

int pop_stack(struct node **stack) {
    int data;
    struct node *tail;

    tail = *stack;
    data = tail->data;
    *stack = tail->next;

    free(tail);

    return data;
}

/* Queue implementation */

void enqueue(struct queue *queue, int data) {
    push_to_stack(&queue->inbox, data);
}

void dequeue(struct queue *queue) {
    if (queue->inbox == NULL && queue->outbox == NULL) {
        return;
    }

    int last;
    if (queue->outbox == NULL) {
        while (queue->inbox != NULL) {
            last = pop_stack(&queue->inbox);
            push_to_stack(&queue->outbox, last);
        }
    }

    last = pop_stack(&queue->outbox);
}

void print_head(struct queue *queue) {
    if (queue->inbox != NULL && queue->outbox == NULL) {
        int last;
        while (queue->inbox != NULL) {
            last = pop_stack(&queue->inbox);
            push_to_stack(&queue->outbox, last);
        }
    }

    if (queue->outbox != NULL) {
        printf("%d\n", queue->outbox->data);
    }
}

int main() {

    int num_q = parse_int(ltrim(rtrim(readline())));

    struct queue* q = (struct queue*) malloc(sizeof(struct queue));
    q->inbox = NULL;
    q->outbox = NULL;
  
    for (int q_itr = 0; q_itr < num_q; q_itr++) {
        char** input_line = split_string(rtrim(readline()));
      
        int type = parse_int(*input_line);
        int x;
        switch (type) {
            case 1:
            x = parse_int(*(input_line + 1));
            enqueue(q, x);
            break;
            case 2:
            dequeue(q);
            break;
            case 3:
            print_head(q);
            break;
        }
    }

    return 0;
}

/* Helpers to handle input from STDIN */

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);

        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    return value;
}

char* ltrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    while (*str != '\0' && isspace(*str)) {
        str++;
    }

    return str;
}

char* rtrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    char* end = str + strlen(str) - 1;

    while (end >= str && isspace(*end)) {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}
