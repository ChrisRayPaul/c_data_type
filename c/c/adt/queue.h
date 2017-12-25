#pragma once
#include "public.h"

typedef struct {
	u8 size;
	u8 len;
	u8 front;
	u8 *buf;
} QUEUE;

QUEUE* QInit(int len, int size);
int QPush(QUEUE *q, void *item);
int QPop(QUEUE *q, void* output);
