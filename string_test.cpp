// just the start of my string test
#include <iostream>
using namespace std;
#include "String.h"

void test_list_from_string_and_print()
{
    cout << "-------- TESTING LIST FROM STRING AND PRINT --------" << endl;
    List L1 = ListNode::list_from_string("Hello!");
    List L2 = ListNode::list_from_string("World!");
    List L3 = ListNode::list_from_string("");
    ListNode::print(cout, L1);
    ListNode::print(cout, L2);
    ListNode::print(cout, L3);
    cout << endl;
    ListNode::list_delete(L1);
    ListNode::list_delete(L2);
    ListNode::list_delete(L3);
}

void test_list_append()
{
    cout << "-------- TESTING APPEND --------" << endl;
    List L1 = ListNode::list_from_string("Hello");
    List L2 = ListNode::list_from_string("world");
    List C = ListNode::list_append(L1, L2);
    ListNode::print(cout, C);
    ListNode::print(cout, L1);
    ListNode::print(cout, L2);
    cout << endl;
    ListNode::list_delete(L1);
    ListNode::list_delete(L2);
    ListNode::list_delete(C);
}

void test_reverse()
{
    cout << "-------- TESTING REVERSE --------" << endl;
    List L1 = ListNode::list_from_string("Hello");
    List L2 = ListNode::list_from_string("world");
    List C = ListNode::list_append(L1, L2);
    List R = ListNode::list_reverse(C);

    ListNode::print(cout, R);
    cout << endl;
    ListNode::list_delete(L1);
    ListNode::list_delete(L2);
    ListNode::list_delete(C);
    ListNode::list_delete(R);
}

void test_nth()
{
    cout << "-------- TESTING NTH --------" << endl;
    List L1 = ListNode::list_from_string("Hello");
    List index = ListNode::list_nth(L1, 4);
    ListNode::print(cout, index);
    cout << endl;
    ListNode::list_delete(L1);
    ListNode::list_delete(index);
}

void test_difference()
{
    cout << "-------- TESTING DIFFERENCE --------" << endl;
    List L1 = ListNode::list_from_string("Hello");
    List index1 = ListNode::list_nth(L1, 3);
    cout << ListNode::list_difference(L1, index1);
    List index2 = ListNode::list_nth(L1, 0);
    cout << ListNode::list_difference(L1, index2);
    List index3 = ListNode::list_nth(L1, 4);
    cout << ListNode::list_difference(L1, index3);

    cout << endl;



}

void test_listcmp()
{
    cout << "-------- TESTING LISTCMP --------" << endl;
    List L1 = ListNode::list_from_string("Hello");
    List L2 = ListNode::list_from_string("Helloo");
    cout << ListNode::list_cmp(L1, L2) << endl;
    cout << ListNode::list_ncmp(L1, L2, 5) << endl;
    cout << ListNode::list_ncmp(L1, L2, 6) << endl;
}

void test_strandchr()
{
    cout << "-------- TESTING LCHR AND LSTR --------" << endl;
    List L1 = ListNode::list_from_string("Hello");
    List L2 = ListNode::list_from_string("randomstring that has a Hello in it");
    List L3 = ListNode::list_chr(L1, 'o');
    ListNode::print(cout, L3);
    cout << endl;
    List L4 = ListNode::list_chr(L2, 'o');
    ListNode::print(cout, L4);
    cout << endl;

    List L5 = ListNode::list_str(L2, L1);
    ListNode::print(cout, L5);
    cout << endl;

}


void test_string_concat()
{
    cout << "-------- testing string concat --------" << endl;
    String ell("Hello");
    String world(" World");

    String hi = ell + world;

    cout << hi << endl;

    String empty("");
    String empty_world = empty + world;
    cout << empty_world << endl;

    String start("HI THIS SI THE FIRST PART what de ");
    String end("THIS IS THE SECOND PART!!!");

    String together = start + end;
    cout << together << endl;

    String test2;
    test2 += start;
    cout << test2 << endl;

    start += end;
    cout << start << endl;

    cout << endl;

}


void test_reverse2() {
    cout << "-------- TESTING REVERSE --------" << endl;
    String s("H");
    cout << s.reverse() << endl;

    String b("HELLO WORLDDD!!");
    cout << b.reverse() << endl;
}


void test_constructors_and_print() {
    cout << "-------- Constructor and Operaor << TESTS --------" << endl;

    String s("Hello World");
    cout << s << endl;

    String y("h");
    cout << y << endl;

    String z("Okay so I want to test whether or not my code works so we shall see how it holds up in the long run. We at 110 so only a littleee let's see if this continues");
    cout << z << endl;

    String example("just a test example");

    String test;
    test = example;
    cout << "I'm putting example which just says 'just a text example' into a new string test and printing it out" << endl;
    cout << test << endl;

}

void test_index() {
    String s("Hello World");
    cout << "-------- Index Testing --------" << endl;
    cout << s[0] << endl;
    cout << s[10] << endl;
    cout << s[4] << endl;
    cout << " should print out H, then error, then D, then error, followed by a o" << endl;

    //cout << s.reverse() << endl;

}

void test_size() {
    cout << "-------- TESTING SIZE --------" << endl;
    String s("Hello World");
    cout << s.size() << endl;
}

void test_relationals() {
    cout << "-------- TESTING RELATIONALS --------" << endl;
    String s("aabcd");
    String d("aabcd");
    String a("aabcz");
    String sh("a");

    cout << "TESTING EQUAL SHOULD BE TRUE FALSE FALSE" << endl;
    cout << (s == d) << endl;
    cout << (s == a) << endl;
    cout << (s == sh) << endl;

    cout << "TESTING > SHOULD BE TRUE THEN FALSE" << endl;
    cout << (s > sh) << endl;
    cout << (s > a) << endl;

    cout << "TESTING < SHOULD BE TRYE FALSE" << endl;
    cout << (s < a) << endl;
    cout << (s < sh) << endl;

    cout << "TESTING <= SHOULD BE TRUE FALSE" << endl;
    cout << (s <= d) << endl;
    cout << (s <= sh) << endl;

    cout << "TESTING >= SHOULD BE TRUE AND FALSE" << endl;
    cout << (s >= sh) << endl;
    cout << (s >= a) << endl;
}


int main()
{
    // test_list_from_string_and_print();
    // test_list_append();
    // test_reverse();
    // test_nth();
    // test_difference();
    // test_listcmp();
    // test_strandchr();
    // test_string_concat();
    // test_reverse2();
    // test_constructors_and_print();
    // test_index();
    // test_size();
     test_relationals();
    return 0;
}
