typedef struct node Node;
typedef struct point Point;
typedef struct entry Entry;
typedef struct query Query;
typedef struct mtree Mtree;
Node* create_node();
Point *search_points_in_radio(Node *node, Query query);