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


���룺

["CQueue", "appendTail", "deleteHead", "deleteHead"]
��һ�б�ʾÿһ�д���Ĳ���

[[], [3], [], []]
�����ʾÿһ�д����������Ҫ�Ĳ���

������
CQueue ��ʾ�½�һ��CQueue���󣬶�Ӧ���������Ϊ[]�����˲�������Ҫ������
appendTail ��ʾִ��һ��appendTail()��������ӦҪ��������Ԫ��Ϊ3��
deleteHead ��ʾִ��һ��deleteHead��������Ӧ���������Ϊ[]�����˲�������Ҫ������
deleteHead ��ʾִ��һ��deleteHead��������Ӧ���������Ϊ[]�����˲�������Ҫ������

���ϵ�������ʵ��һ������ִ�еĲ������������Ӧ���������

������γ�ȣ�
1����������
2���˴β����������
3������������������������ͨ��Ĭ��˳��һһ��Ӧ�ġ�


/**
 * Your CQueue struct will be instantiated and called as such:
 * CQueue* obj = cQueueCreate();
 * cQueueAppendTail(obj, value);

 * int param_2 = cQueueDeleteHead(obj);

 * cQueueFree(obj);
*/