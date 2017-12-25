#include "test.h"

typedef struct {
	char name[10];
}Ts;

void test_stack()
{
	STACK *q1;

	q1 = SInit(6,sizeof(Ts));

	Ts s1 = { "abc" };
	Ts s2 = { "bbb" };
	Ts s7, s8;

	SPush(q1, &s1);
	SPush(q1, &s2);
	SPop(q1, &s7);
	SPop(q1, &s8);
}
void test_queue()
{
	QUEUE *q1 =	QInit(10,sizeof(int));
	int a = 2, b = 888;
	QPush(q1, &a);
	QPush(q1, &b);
	int c;
	QPop(q1, &c);
}
void test()
{
	test_stack();
	test_queue();
}
