#include "stacklist.h"
#include <gtest.h>


TEST(StackList, can_create_stack_with_positive_length)
{
	ASSERT_NO_THROW(StackList<int> A(43));
}

TEST(StackList, throws_when_create_stack_with_negative_length)
{
	ASSERT_ANY_THROW(StackList<int> A(-43));
}

TEST(StackList, can_create_copied_stack)
{
	StackList<int> A(43);
	ASSERT_NO_THROW(StackList<int> B(A));
}

TEST(StackList, check_empty_stack)
{
	StackList<int> A(43);
	EXPECT_EQ(1, A.IsEmpty());
}

TEST(StackList, cant_Push_element_in_full_stack)
{
	StackList<int> A(4);
	A.Push(1);
	A.Push(2);
	A.Push(3);
	A.Push(4);
	ASSERT_ANY_THROW(A.Push(5));
}

TEST(StackList, cant_get_element_in_empty_stack)
{
	StackList<int> A(4);
	ASSERT_ANY_THROW(A.Pop());
}

TEST(StackList, can_Push_and_get_element)
{
	StackList<int> A(4);
	A.Push(1);
	A.Push(2);
	A.Push(3);
	EXPECT_EQ(3, A.Pop());
}
