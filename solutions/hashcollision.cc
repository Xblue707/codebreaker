// hashcollision
#include "hashcollision.h" // remember to include this!

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
#define rep(x, start, end) \
  for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); \
       ((start) < (end) ? x++ : x--))
#define rap(i, v) for (auto i : (v))
#define setup \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr); \
  cout.tie(nullptr);
#define nl '\n'
#define pr pair
#define vc vector
#define dq deque
#define qu queue
#define pq priority_queue
#define mp map
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define fi first
#define se second
#define all(c) (c).begin(), (c).end()
#define sz(c) (ll)(c.size())
#define pub push_back
#define pob pop_back
#define mpr make_pair
#define eb emplace_back
#define debug(x) cerr << #x << ": " << x << '\n';

// other macros
#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <sstream> // istringstream buffer(myString);
#include <stack>
#include <vector>
using namespace std;
#define bit(x, i) (x & (1 << i)) // select the bit of position i of x
#define lowbit(x) ((x) & ((x) ^ ((x)-1))) // get the lowest bit of x
#define hBit(msb, n) \
  asm("bsrl %1,%0" \
      : "=r"(msb) \
      : "r"(n)) // get the highest bit of x, maybe the fastest
#define max(a, b) (a < b ? b : a)
#define abs(x) \
  (x < 0 ? (-x) : x) // big bug here if "-x" is not surrounded by "()"
#define IN(i, l, r) (l < i && i < r) // the next for are for checking bound
#define LINR(i, l, r) (l <= i && i <= r)
#define LIN(i, l, r) (l <= i && i < r)
#define INR(i, l, r) (l < i && i <= r)
#define F(i, L, R) for (int i = L; i < R; i++) // next four are for "for loops"
#define FE(i, L, R) for (int i = L; i <= R; i++)
#define FF(i, L, R) for (int i = L; i > R; i--)
#define FFE(i, L, R) for (int i = L; i >= R; i--)
#define getI(a) \
  scanf("%d", &a) // next three are handy ways to get ints, it's also force you
                  // to use '&' sign
#define getII(a, b) scanf("%d%d", &a, &b)
#define getIII(a, b, c) scanf("%d%d%d", &a, &b, &c)
#define wez(n) \
  int(n); \
  scanf( \
      "%d", \
      &(n)) // handy if the input is right after the definition of a variable
#define wez2(n, m) \
  int(n), (m); \
  scanf("%d %d", &(n), &(m))
#define wez3(n, m, k) \
  int(n), (m), (k); \
  scanf("%d %d %d", &(n), &(m), &(k))
#define TESTS wez(testow) while (testow--) // for multiple cases problems
#define whileZ \
  int T; \
  getI(T); \
  while (T--) // the same as above
#define getS(x) scanf("%s", x) // get a char* string
#define clr(a, x) \
  memset(a, x, sizeof(a)) // set elements of array to some
                          // value
#define char2Int(c) (c - '0')
#define lastEle(vec) vec[vec.size() - 1]
#define SZ(x) ((int)((x).size()))
#define REMAX(a, b) (a) = max((a), (b)) // set a to the maximum of a and b
#define REMIN(a, b) (a) = min((a), (b));
#define FOREACH(i, t) \
  for (typeof(t.begin()) i = t.begin(); i != t.end(); \
       i++) // traverse an STL data structure
#define ALL(c) (c).begin(), (c).end() // handy for function like "sort()"
#define PRESENT(c, x) ((c).find(x) != (c).end())
#define CPRESENT(c, x) (find(ALL(c), x) != (c).end())
#define ll \
  long long // data types used often, but you don't want to type them time by
            // time
#define ull unsigned long long
#define ui unsigned int
#define us unsigned short
#define IOS \
  ios_base::sync_with_stdio(0); // to synchronize the input of cin and scanf
#define INF 1001001001
#define PI 3.1415926535897932384626
// for map, pair
#define mp make_pair
#define fi first
#define se second
// for debug
inline void pisz(int n) { printf("%d\n", n); }
#define DBG(vari) cerr << #vari << " = " << (vari) << endl;
#define printA(a, L, R) FE(i, L, R) cout << a[i] << (i == R ? '\n' : ' ')
#define printV(a) printA(a, 0, a.size() - 1)
#define MAXN 10000
// for vectors
#define pb push_back
typedef int elem_t;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
// directions
const int fx[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
const int fxx[8][2] = {{0, 1}, {0, -1}, {1, 0},  {-1, 0},
                       {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
template <typename T, typename TT>
ostream& operator<<(ostream& s, pair<T, TT> t) {
  return s << "(" << t.first << "," << t.second << ")";
}
template <typename T>
ostream& operator<<(ostream& s, vector<T> t) {
  F(i, 0, SZ(t)) s << t[i] << " ";
  return s;
}

/* [taken from https://hcicppguide.me]

CPP Guide for Competitive Programming (HCI EC³)
This a guide made by a few EC³ members in Lower Secondary. Have fun reading and
getting confused!

Introduction to CP
Informatics olympiads, also known as competitive programming, is a form of
programming where contestants are required to solve problems within a certain
time limit.

Their code will be checked against a set of inputs and outputs, which determine
if the code is correct.

This form of programming requires a vast amount of knowledge in common
algorithms, math, as well as logical thinking.

Common Terminology
Not sure what the abbreviations mean? Here you go:

Abbr.	Meaning	Notes
AC	All Correct	Your code produced expected results with the testcases provided.
WA	Wrong Answer	Some/all of the testcases did not produce the expected result.
TLE	Time Limit Exceeded	Your code has run for too long, and the program was
killed. MLE	Memory Limit Exceeded	Your code took up too much memory, and the
program was killed. RTE(6)	Runtime Error (6)	Your program has overflowed in
terms of memory capacity. RTE(11)	Runtime Error (11)	Your program accessed
areas in memory which were out of range. For those interested in USACO:

Abbr.	Meaning
*	Correct answer
X	Wrong answer
!	Runtime error or memory limit exceeded
E	Empty output file
M	Missing output file
T	Time limit exceeded
Hello, World
A very simple program allowing you to AC this CP problem

#include <iostream>
using namespace std;

int main() {
  cout << "Hello World";
  return 0;
}
*/

/* General Tips
WHAT NOT TO DO AT ALL COSTS

Before I start, I thought that you should know that there are a few things that
you should avoid at all costs when doing Competitve Programming.

Using Github Copilot or any other AI autocomplete assistants. You will be
screamed at by certain contributors if you do.

Do NOT share your code during a contest with other contestants during the
duration of the contest, this could lead to disqualification for LIFE.

Beware of using things like "endl" or "ends" during C++ contests as some CP
websites do not allow that.

Instead of using "or", substitute it with "||" as "or" might not work and it
will minimise troublesome situations

You are allowed to refer to algorithm codes that you already wrote beforehand
but definitely NOT from other people/websites

Fast Input/Output
Option 1: Use FastIO
This is if you use cin/cout. Include the following two lines at the top of your
code:

ios::sync_with_stdio(false);
cin.tie(nullptr);
However, do note that if you include ios::sync_with_stdio(false), then mixing C
(scanf/printf) and C++ (cin, cout) style I/O may produce unexpected results.

The upside is that both cin/cout become faster. Including cin.tie(nullptr) will
reduce the runtime if you are using only cin and cout.

Option 2: Use scanf/printf
Using scanf and printf from the C STL will decrease your runtime. Example:

#include <stdio.h>
using namespace std;

int main() {
  int a;
  printf("Enter an integer: ");
  scanf("%d", &a);
  printf("Number: %d", a);
}
Debug Ouput
Debug output should be written to std::cerr (stderr), not std::cout (stdout)

std::endl
Don't use endl. AVOID AT ALL COSTS.

std::endl flushes the buffer and causes a spike in the runtime (resulting in
certain TLEs). Instead, use \n which just send the output to the next line.

If you're used to typing endl (like I am), you can always use #define endl "\n".
Read this SO post for more info. */

/* Running Code
Running Code Locally
You need a compiler to be able to compile C++ programs and run them on your
computer. You can either google for installation instructions, or continue
reading ⬇️.

Installing GCC on Linux
If you're a chad Linux user, GCC should have been installed by default. To
check, run the following command:

which g++
If you have g++ installed, you should see something like this: GCC installed If
you get g++ not found, you can either install it with your distro's package
manager or build it from source.

Installation instructions for certain distros
Installing G++ on Windows
Unlike Linux, GCC is not pre-installed on Windows. Instead, you can visit here
and install a gcc compiler. There are different versions for 64-bit and 32-bit
editions.

P.S. We don't quite recommend using Windows

Running C++ with G++
Shouldn't be that hard but in case you didn't know:

g++ <input file name> -o <output file name> -O2 && ./<output file name>
You can alternatively use CMake but that's not the point of this guide.

Example CMakeLists.txt
Installing Clang
Simply refer to this. */

/* Code Editors/IDEs
I mean, you can use a plain-text editor like Notepad, but for optimal
development experience, you should use a code editor or IDE. A few of the most
popular ones are listed below.

Neovim
Neovim is a fork of Vim. It is a terminal-based text editor, and written in C
and Lua. You can use it together with LunarVim, which is an IDE layer for
Neovim.

LunarVimLunarVim

Visual Studio Code
My personal favourite, Visual Studio Code is a free, open-source (kinda) code
editor/IDE developed by Microsoft. It is written in TypeScript and runs on
Electron. It has a lot of extensions, and is very customizable.

I like to use it with Github Copilot 😄

Sublime Text
Sublime Text is a lightweight code editor that's not free, but has a unlimited
trial period (so I don't really see the difference).

Good Ol' Vim
Vim is a terminal-based text editor, and written in C. It is a very powerful
editor, and you can use it together with Vim-Plug for plugins.

Geany
Geany is a free and open-source lightweight code editor with basic IDE features.
It looks arguably uglier than all other IDEs and editors listed on this page.

Atom
Deprecated. Still feel kinda sad about it.

CLion
CLion is an IDE for C/C++ development. It is developed by JetBrains, and paid.
It is feature rich, but the downside of that is that it is very resource hungry,
and according to a MacOS user, uses more RAM than GTA V running in a VM. */

/* syntax
Syntax is the most essential to grasp to write a c++ program. Here is an
overview.

structure
#include <iostream>
using namespace std;
int main() { cout << "Hello World"; }
This is a basic C++ program which prints "Hello World" to the console.

It is made up of three essential parts:

#include: includes the necessary header files for functions used in the program.
using namespace std: includes the standard library of c++ functions.
int main() {}: the main function, where all driver code should go.
cout is for standard output (i.e. "printing"), and cin is for receiving input to
a variable defined earlier.

datatypes
variables can be thought of as 'containers' for values, that can be changed and
reused throughout a program. in c++, variables take one of many datatypes, shown
below.

Basic Data Types
Data Type	Size (in bytes)	Stores	Example
int	444	Numbers (−2147483648-2 147 483 648−2147483648 to 21474836472 147 483
6472147483647)	1244212 44212442 float	444	Decimal numbers (up to 777
d.p.)	5.635625.635625.63562 double	888	Decimal numbers (up to 151515
d.p.)	3.14159265358797323.14159265358797323.1415926535879732 bool	111	true or
false values	true, false char	111	A single character	'D', '$' string	variable
Multi-character text	'hi mom' Data Type Modifiers these are most commonly used
for numeric datatypes (int and double), to resize their limits according to the
program's requirements.

the default modified datatype is int.

Modified Datatype	Size (in bytes)	Range
short	222	−32768-32 768−32768 to 3276732 76732767
unsigned short	222	000 to 6553565 53565535
unsigned	444	000 to 42949672954 294 967 2954294967295
long	444	−2147483648-2 147 483 648−2147483648 to 21474836472 147 483
6472147483647 unsigned long	444	000 to 42949672954 294 967 2954294967295 long
long	888	−263-2^{63}−2 63 to 263−12^{63} - 12 63 −1 unsigned long long	888	000
to 1844674407370955161518 446 744 073 709 551 61518446744073709551615 long
double	121212	- control flow a program can include logical statements, that
control how the program behaves in differing conditions.

if statements
these can be thought of as asking yes/no questions to the computer.

if the answer is 'yes', something would happen; if 'no', something else would
happen.

below is code that invites the user to a drink if 18 and over, or else denies
access.

#include <iostream>
using namespace std;
int main() {
  int a;
  cout << "enter your age: ";
  cin >> a;

  if (a < 18) {
    cout << "access denied";
  } else {
    cout << "have a drink!";
  }
}
conditions in if-statements are surrounded by parentheses and the following code
to be executed is in curly braces.

multiple conditions can be expressed with else if:

#include <iostream>
using namespace std;
int main() {
  int a;
  cout << "enter your age: ";
  cin >> a;

  if (a < 18) {
    cout << "you cannot drink nor smoke.";
  } else if (a < 21) {
    cout << "you can drink, but not smoke.";
  } else {
    cout << "you can do both! welcome to adulthood!";
  }
}
Logical Operators
if multiple conditions are to be satisfied, the following can be used.

Op.	Means	True Example	False Example
&&	"and"	(5 > 3 && 2 < 4)	(3 > 5 && 2 < 4)
||	"or"	('s' == 's' or 't' == 'u')	('s' == 't' or 't' == 'u')
!	"not"	(!(5 < 3))	(!('a' == 'a'))
Comparison Operators
these are used inside conditions to compare values to one another, resulting in
true/false return values.

Op.	Means	True Example
==	is equal to	(5 == 5)
!=	is not equal to	(5 != 3)
>	is greater than	(5 > 3)
>=	is greater than or equal to	(5 >= 5)
<	is smaller than	(3 < 5)
<=	is smaller than or equal to	(5 <= 5)
Loops
For Loop
say you wanted to repeat a block of code some number of times. writing the same
block of code that many times would be tiresome, and it gets worse if the number
of times to repeat it is determined by the user.

we can use for loops instead! a for-loop contains these three parts

initialisation: initialise the counter variable to be used
condition: loop as long as the condition is true
increment/decrement: increment/decrement variables with every run of the loop
any of these parts can be ommited.

#include <iostream>
using namespace std;
int main() {
  //  initialize, cond., inc./dec.
  //  output: 1 2 3 4 5
  for (int i = 1; i <= 5; i++) {
    cout << i << ' ';
  }
  //  output: 4 3 2 1
  for (int i = 4; i > 0; i--) {
    cout << i << ' ';
  }
}
While Loop
if you didn't have a certain number of times the loop should run, a loop can
still run as long as certain condition(s) hold true.

the block of code inside the loop will repeat as long as the condition is true.

#include <iostream>
using namespace std;
int main() {
  int i = 10;
  while (i > 0) { // put condition in parens.
    cout << i << ' ';
    i--;
  }
  // output: 10 9 8 7 6 5 4 3 2 1
}
Functions
functions define a block of code to be reused throughout the program at
different junctures.

you can think of these as variables but for blocks of code.

#include <bits/stdc++.h>
using namespace std;

// function name, (parameters)
int sum(int a, int b, int c) { return a + b + c; }

int main() {
  cout << sum(1, 2, 3);
  // output: 6
}
normally, a function is expected to return a certain value after the operations
inside have been completed. these values take the c++ datatypes we've seen
before:

int function
int add(int a, int b, int c) { return a + b + c; }
void function
this function returns nothing, and is normally used to modify existing
variables.

void addAndPrint(int a, int b, int c) { cout << a + b + c; }

int main() { addAndPrint(1, 2, 3); }
string function
returns a string.

string add(string a, string b, string c) { return a + b + c; }

int main() {
  cout << add("ab", "cd", "ef");
  // output: abcdef
}
bool function
returns a boolean value: true or false.

bool check(int a, int b, int c) {
  if (a + b > c)
    return true;
  return false;
}
note: the else keyword isn't needed here, because when return is called, the
function ends, ignoring everything else after it.

alternatively,

int add(int a, int b, int c) { return a + b > c; }
note: this function can still produce true or false results depending on the
values of a, b and c. */

/* STL Data Structures
Here are some data structures found in the standard library and how to implement
them, along with a few useful functions you should probably know about.

Arrays
By far the simplest data structure you should probably know about is the array.

Arrays have:

a fixed size (number of elements it can contain)
no capability to erase / append elements
elements with all the same datatypes
Here's a short snippet showing what arrays can do:

#include <bits/stdc++.h>
using namespace std;

int main() {
  int arr[5];  // defines an array of ints with size 5
  arr[0] = 1;  // sets the first element of the array to 1
  arr[3] = 57; // sets the fourth element to 57

  cout << arr[3];
  cin >> arr[2]; // get the user to input the third element of the array

  cout << arr.size(); // size of the array
}
Here is the basic code to input an array:

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int x[n];
  for (int i = 0; i < n; ++i) {
    cin >> x[i];
  }
}
Vectors
Flexible-sized arrays with the capability to append elements (from the end) and
pop elements from the back.

Erasing elements from anywhere in the vector is also allowed.

#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v;  // defines a vector of ints
  v.push_back(5); // appends 5 to the vector
  v.push_back(9);
  v.push_back(6);
  v.push_back(0);

  v.pop_back(); // now what does the vector contain?

  cout << v.size();                     // size of the vector
  cout << v.front() << ' ' << v.back(); // first and last elements

  sort(v.begin(), v.end()); // sorts the vector

  for (auto i : v)
    cout << i << ' '; // iterates through every element in the vector
}
Deques
Pronounced 'deck' or 'd-q'.

A vector on steroids, allowing you to insert (from the front) and append (from
the back) elements. It can also pop elements from the front and back.

#include <bits/stdc++.h>
using namespace std;

int main() {
  deque<long> d; // creates a deque of long ints

  // gets the user to cin 5 elements and store them in the deque
  for (int i = 0; i < 5; i++) {
    long a;
    cin >> a;
    d.push_back(a);
  }

  d.push_front(55); // now 55 is at the front

  // d.size(), d.front() and d.back() still work
  // sort(d.begin(), d.end() still works)

  d.pop_back();
  d.pop_front();
  cout << "oh bother there are only " << d.size() << " elements left.";
}
Stacks
Stacks are basically stacks of roti prata (or your mountain of procrastinated
homework).

You can only access the top element, and only erase the top element. (What kind
of sick freak would take prata from the bottom of the stack?)

#include <bits/stdc++.h>
using namespace std;

int main() {
  stack<int> s;
  s.push(5);
  s.push(7);
  s.push(69);

  cout << s.top() << " is currently 1st place in kahoot\n";
  cout << "there are " << s.size() << " players\n";

  while (!s.empty())
    s.pop(); // check if the stack is empty, if not, keep popping!
  cout << s.size() << " more players left\n";
}
Queues
Like the perpetually long canteen queue in the HS Canteen during 1:30 pm lunch
break, queues add elements from the back and pop elements from the front (in
case you don't know how a real-life queue works, because you haven't stopped
programming for 72 hours straight).

#include <bits/stdc++.h>
using namespace std;

int main() {
  queue<int> q;
  q.push(5);
  q.push(4);
  q.push(4);
  q.push(3);

  cout << q.size() << '\n';

  // quick way to see all the elements in the queue
  while (!q.empty()) {
    cout << q.front() << ' ';
    q.pop();
  }

  // NOTE: only 1 occurrence of 4 is printed out,
           // because a queue removes duplicate values
}
Priority Queues
Like a queue, but the most popular boy is now at the end perpetually. Priority
queues sort the elements (in descending order) every time a new element is
pushed in.

#include <bits/stdc++.h>
using namespace std;

int main() {
  priority_queue<int> pq;
  pq.push(5);
  pq.push(6);
  pq.push(3);

  cout << pq.size() << '\n';

  // NOTE: notice that the elements are printed in ascending order!
  while (!pq.empty()) {
    cout << pq.front() << ' ';
    q.pop();
  }
}
Maps and Unordered Maps
A map is a key-value data structure, with a key being linked to a value (can be
different datatype).

You can think of these as pairs of keys and locks.

#include <bits/stdc++.h>
using namespace std;

int main() {
  map<string, int> m;
  m["yo"] = 6;
  m["mom"] = 9;
  m["so"] = 4;
  m["fat"] = 420;

  cout << m["fat"] << '\n';
  cout << m.size() << '\n';

  m.insert(pair<string, int>("abc", 123)); // can also insert like this

  // loop through key and value
  for (auto itr = marks.begin(); itr != marks.end(); ++itr) {
    cout << itr->first << ": " << itr->second << 'n';
  }
}
Unordered maps are different because they're slightly faster than the map.

#include <bits/stdc++.h>
using namespace std;

int main() {
  unordered_map<string, int> m;
  m["yo"] = 6;
  m["mom"] = 9;
  m["so"] = 4;
  m["fat"] = 420;

  cout << m["fat"] << '\n';
  cout << m.size() << '\n';

  m.insert(pair<string, int>("abc", 123)); // can also insert like this

  // loop through key and value
  for (auto itr = marks.begin(); itr != marks.end(); ++itr) {
    cout << itr->first << ": " << itr->second << 'n';
  }
}
Sets and Unordered Sets
A set is a more picky vector, it:

removes duplicate values
sorts every time you insert an element
#include <bits/stdc++.h>
using namespace std;

int main() {
  set<int> s;

  s.insert(40);
  s.insert(35);
  s.insert(55);

  set<int>::iterator itr; // defines an iterator of the set
  cout << "this set weighs " << s.size() << " kg\n";

  // prints all the elements in the set
  for (itr = s.begin(); itr != s.end(); s++)
    cout << *itr << " ";

  s.erase(s.begin(), s.find(55)); // remove 55

  // lower_bound() and upper_bound(): returns an iterator to the first element
  // which is equal to OR before / after the element in the set
  cout << *s.lower_bound(37) << " " << *s.upper_bound(37);
}
Unlike the set, and unordered set does not sort, so instead of the usual
O(log⁡N)\mathcal{O}(\log N)O(logN), insertions are O(1)\mathcal{O}(1)O(1).

#include <bits/stdc++.h>
using namespace std;

int main() {
  unordered_set<int> s;

  s.insert(40);
  s.insert(35);
  s.insert(55);

  set<int>::iterator itr; // defines an iterator of the set
  cout << "this set weighs " << s.size() << " kg\n";

  // prints all the elements in the set
  for (itr = s.begin(); itr != s.end(); s++)
    cout << *itr << " ";

  s.erase(s.begin(), s.find(55)); // remove 55

  // lower_bound() and upper_bound(): returns an iterator to the first element
  // which is equal to OR before / after the element in the set
  cout << *s.lower_bound(37) << " " << *s.upper_bound(37);
}
Iterating
You may have noticed all the examples use something like this to output a data
structure.

for (itr = s.begin(); itr != s.end(); s++)
  cout << *itr << " ";
There is a shortcut:

for (auto i : s)
  cout << i << ' ';
that more people generally like using.

Final Notes
It takes time to memorise all the different uses for all the data structures, so
keep practising! */

/* I love diarrhea
Yes that is right, I love to have diarrhea. One of my favorite things to do is
take a laxative on weekends when I have absolute nothing to do and I know I’ll
be at the house all day. Sometimes when I can’t wait the 8 hours a laxative will
take I’ll do a salt water flush and I’ll be peeing out my butthole in 30
minutes. I’ve even found for me that 100% grapefruit juice will do the trick if
I drink half a gallon in a day. There are so many aspects of it that make it one
of the best experiences.

The first aspect I love is the rush. Just going about my business and then all
of a sudden I know I might poop my pants. That it is time to get on a toilet
right now and nothing else matters. It’s an adrenaline rush when the stomach
starts to gurgle and you know you can’t stop what’s about to happen. That I am
totally at the mercy of my bowels.

The second is simply the feeling. I love the feeling of relief I get in my
stomach, the feeling of it rushing out of my butt hole, and it is one of those
good burn feelings in the butt hole too. I love that fiery butt hole burn. Then
when you go to wipe it’s kind of like you are scratching that ultimate itch. To
put it simply from start to finish the feeling of diarrhea has multiple aspects
that all feel good and all of them have their special place in my heart.

The third aspect I love is the smell. It’s like when you have a good fart and it
stinks really bad and you kind of sniff it in and you are like dang, I just did
that. The smell of diarrhea is like I just opened a sewer line right in my
toilet and I love it. It’s just a great scent to sit there and enjoy for a
minute. A nasty type of good that makes you feel a little dirty.

The fourth aspect would have to be looking at what came out. Just standing to
wipe and looking at what once used to be a perfectly clean toilet is now black.
Just black water with black spatter all around the bowl of the toilet. I love to
stand there for a second and look at it and say “dang look at all that bad stuff
I just expelled from my body.” That’s a great feeling looking at it and knowing
how you’ve just purged your body.

To put it simply, I highly recommend diarrhea.

Edit: For those who have commented and are concerned about my health. I should
of clarified this isn’t an every day thing. This is a once every month or two
type of deal. I work a lot and have a busy home life and am by all means what
you would consider a normal person lol. This is like something I will do when I
actually have a day to rest and relax from my busy life because it feels good to
me and is an enjoyable experience. A de-stresser if you will. */

void end2020(int M, int Q) {
  eslihash("a"); // inside the .h file
  eslihash("a");
}

/* Dear Joshua,
I am writing to request the return of my position as Assembly Pianist with
immediate effect. I greatly appreciate and applaud your willingness to answer
the call of duty to, in your words, alleviate the suffering of the hundreds of
people who listen to my piano playing ever week. However, it must be noted that
the applause you received at today's assembly was considerably less than what I
would expect to receive on an average day. I thus deduce that my playing has
been generally more well-received than yours. Given that, I am afraid to say
that it is most illogical to claim that our fellow students are unsatisfied with
my playing. I therefore assert that you have no reason to obtain my position and
demand the return of my job, as the better qualified candidate.

Thank you,
Gareth */
