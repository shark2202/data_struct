//单项链表的
//链表的一个元素，包含数据和下一个链接的地址
typedef struct ListElmt_{
    void *data;
    struct ListElmt_ *next;
} ListElmt;

/**
 * 链表的结构
 * 长度
 * key匹配的方法？？
 * 注销的回调
 */ 
typedef struct List_{
    int size;
    int (*match)(const void *key1,const void *key2);
    void (*destory)(void *data);

    ListElmt *head;
    ListElmt *tail;
} List;

/**
 * 初始链接，注册一个销毁链表的回调
 */ 
void list_init(List *list,void(*destory)(void *data));

/**
 * 销毁链表
 */ 
void list_destory(List *list);

int list_insert_next(List *list,ListElmt *el,const void *data);


int list_remove_next(List *list,ListElmt *el,void **data);

int list_size(const List *list);

ListElmt *list_head(const List *list);

ListElmt *list_tail(const List *list);



