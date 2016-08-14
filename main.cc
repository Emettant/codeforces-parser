#define _CRT_SECURE_NO_WARNINGS

#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#include <numeric>
#include <tuple>
#include <cassert>
#include <cstring>
#include <stack>

#define rep(i,n) for((i)=0;(i)<(n);(i)++)
#define rp(i,s,n) for((i)=(s);(i)<(n);(i)++)    
#define repe(it,a) for(auto (it) = (a).begin();(it)!=(a).end();++(it))

#define ll long long
#define MP make_pair 
#define MT make_tuple
#define PB push_back
#define X first
#define Y second
#define ALL(a) (a).begin(),(a).end()
#define SZ(a) (a).size()
#define LEN(s) (s).length() 
#define uset unordered_set
#define umap unordered_map
#define IT iterator

#pragma comment(linker, "/stack:16777216")

using namespace std;

#define NUMBERS(a,b) { int _i_; vector<int> _A_(((b))-(a)); rep(_i_,_A_.size()) _A_[_i_] =_i_+(a); out(_A_);}

template <class T> void out(map<char, T> & a, string s = "(%3c ->%3d)") { repe(it, a) printf(s.c_str(), it->X, it->Y); printf("\n"); }

template <class T>void out(vector<T> & a, string s = "%3d ") { int i, n = a.size(); rep(i, n) printf(s.c_str(), a[i]); printf("\n"); }

template <class T>void out(T * a, int n, string s = "%3d ") { int i; rep(i, n) printf(s.c_str(), a[i]); printf("\n"); }


ll i, j, M, n, m, k, p;

int MainSolve(string args = "") {
	cout << args << "\n";
	//write code here

}


string ReadAllLines(char * fileName) {
	string s = "";
	const int NMAX = 1000;
	char buf[NMAX]; buf[0] = 0;
	FILE *f = fopen(fileName, "r");
	while (fgets(buf, NMAX, f))
		s = s + string(buf);
	return string(s.begin(), find_if(s.rbegin(), s.rend(), [](char c) {return c != '\n'&& c != '\r' && c != '\t' && c != ' '; }).base());
}
int main() {
