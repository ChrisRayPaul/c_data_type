#include "queue.h"

QUEUE* QInit(int len, int size)
{
	QUEUE *q = malloc(sizeof(QUEUE));
	q->buf = calloc(len, size);
	q->len = len;
	q->front = 0;
	q->size = size;
	return q;
}

int QPush(QUEUE *q, void *item)
{
	if (q->front >= q->len*q->size) {
		return FALSE;
	}
	memcpy(&q->buf[q->front], item, q->size);
	q->front += q->size;
	return TRUE;
}

int QPop(QUEUE *q, void* output)
{
	if (0 == q->front) {
		return FALSE;
	}
	memcpy(output, q->buf, q->size);
	q->front -= q->size;
	memcpy(q->buf, &q->buf[q->size], (q->len - 1)*q->size);
	return TRUE;
}