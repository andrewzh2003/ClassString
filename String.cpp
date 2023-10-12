#include <iostream>
using namespace std;
#include "String.h"

void String::error(const char* msg) const
{
    cout << "ERROR: " << msg << endl;
}

bool String::in_bounds(int i) const
{
    return i >= 0 && i < ListNode::list_length(head);
}

String::String(const char* s)
{
    head = ListNode::list_from_string(s);
}

String::String(const String& s)
{
    head = ListNode::list_copy(s.head);
}

//move stuff goes here
String::String(String && s)
{
    head = s.head;
    s.head = nullptr;
}

String& String::operator = (String&& s)
{
    ListNode::list_delete(head);
    head = s.head;
    s.head = nullptr;
    return *this;
}

String& String::operator = (const String& s)
{
    if (s.head)
    {
        ListNode::list_delete(head);
        head = ListNode::list_copy(s.head);
    }
    return *this;
}

char& String::operator [] (int index)
{
    if (in_bounds(index)) {
        List returnVal = ListNode::list_nth(head, index);
        return returnVal->data;
    }
    String::error("Out of index");
    return head->data;
}

int String::size() const
{
    return ListNode::list_length(head);
}

String String::reverse() const
{
    String rev(ListNode::list_reverse(head));
    return rev;
}

int String::indexOf(const char c) const
{
    List returnVal = ListNode::list_chr(head, c);
    if (returnVal == nullptr)
        return -1;
    return ListNode::list_difference(head, returnVal);
}

int String::indexOf(const String& s) const
{
    List returnVal;
    if (ListNode::list_length(s.head) == 1)
        returnVal = ListNode::list_chr(head, s.head->data);
    else
        returnVal = ListNode::list_str(head, s.head);

    if (returnVal == nullptr)
        return -1;

    return ListNode::list_difference(head, returnVal);
}

bool String::operator == (const String& s) const
{
    return ListNode::list_cmp(head, s.head) == 0;
}

bool String::operator != (const String& s) const
{
    return ListNode::list_cmp(head, s.head) != 0;
}

bool String::operator > (const String& s) const
{
    return ListNode::list_cmp(head, s.head) > 0;
}

bool String::operator >= (const String& s) const
{
    return ListNode::list_cmp(head, s.head) >= 0;
}

bool String::operator < (const String& s) const
{
    return ListNode::list_cmp(head, s.head) < 0;
}

bool String::operator <= (const String& s) const
{
    return ListNode::list_cmp(head, s.head) <= 0;
}

String String::operator +(const String& s) const
{
    String returnVal(ListNode::list_append(head, s.head));
    return returnVal;
}

String& String::operator +=(const String& s)
{
    List temp = ListNode::list_append(head, s.head);
    ListNode::list_delete(head);
    head = temp;
    return *this;
}

void String::print(ostream& out) const {
    ListNode::print(out, head);
}

void String::read(istream& in)
{
    char input[1024];
    in >> input;
    head = ListNode::list_from_string(input);
}

String::~String()
{
    ListNode::list_delete(head);
}

//private functions

String::String(List L)
{
    head = L;
}

// outside of String.h functions
ostream& operator << (ostream& out, const String& s)
{
    s.print(out);
    return out;
}

istream& operator >> (istream& in, String& s)
{
    s.read(in);
    return in;
}

// relational operations