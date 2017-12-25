#include "stack.h"

STACK* SInit(u32 len, u8 size)
{
	STACK *q = malloc(sizeof(STACK));
	q->buf = calloc(len, size);
	q->len = len;
	q->front = 0;
	q->size = size;
	return q;
}

int SPush(STACK *q, void *item)
{
	if (q->front >= q->len*q->size)
	{
		return FALSE;
	}
	memcpy(&q->buf[q->front], item, q->size);
	q->front += q->size;
	return TRUE;
}

int SPop(STACK *q, void* output)
{
	if (0 == q->front)
	{
		return FALSE;
	}

	q->front -= q->size;
	memcpy(output, &q->buf[q->front], q->size);

	return TRUE;
}