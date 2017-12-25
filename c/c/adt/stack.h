#pragma once
#include "public.h"

typedef struct {
	u8 *buf;
	u8 len;
	u8 front;
	u8 size;
} STACK;

STACK* SInit(u32 len, u8 size);
int SPush(STACK *q, void *);
int SPop(STACK *q, void *);