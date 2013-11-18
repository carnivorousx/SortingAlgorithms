#include "Testor.h"

int main(){
	
	//test(mode 1=one testcase,2=two testcase ; length of testcase)
	
	Testor* test = new Testor(2,10000);
	test->test("InsertSort");
	test->test("SelectionSort");
	test->test("ShellSort");
	test->test("HeapSort");
	
	// quicksort1 can not execute mode2, because when
	// test case is reversed, quicksort1 has to create a large
	// numbers of stack, which will cause stack overflow
	// change test mode into 1 and can test quicksort1

	//test->test("QuickSort");
	
	test->test("QuickSort_2");
	test->test("MergeSort");
	system("pause");
	return 0;
}