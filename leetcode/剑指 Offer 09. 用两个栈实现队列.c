typedef struct {

} CQueue;


CQueue* cQueueCreate() {

}

void cQueueAppendTail(CQueue* obj, int value) {

}

int cQueueDeleteHead(CQueue* obj) {

}

void cQueueFree(CQueue* obj) {

}


输入：

["CQueue", "appendTail", "deleteHead", "deleteHead"]
这一行表示每一行代码的操作

[[], [3], [], []]
这个表示每一行代码操作所需要的参数

举例：
CQueue 表示新建一个CQueue对象，对应的所需参数为[]，即此操作不需要参数。
appendTail 表示执行一个appendTail()操作，对应要被操作的元素为3。
deleteHead 表示执行一个deleteHead操作，对应的所需参数为[]，即此操作不需要参数。
deleteHead 表示执行一个deleteHead操作，对应的所需参数为[]，即此操作不需要参数。

以上的输入其实是一个代码执行的步骤描述与其对应所需参数。

即两个纬度：
1、操作描述
2、此次操作所需参数
3、操作描述与操作所需参数是通过默认顺序一一对应的。


/**
 * Your CQueue struct will be instantiated and called as such:
 * CQueue* obj = cQueueCreate();
 * cQueueAppendTail(obj, value);

 * int param_2 = cQueueDeleteHead(obj);

 * cQueueFree(obj);
*/