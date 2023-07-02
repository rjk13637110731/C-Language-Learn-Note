#pragma once
namespace Outer {
	int i;
	namespace Inner {
		void f() {
			i++;
		}

		int i;
		void g() {
			i++;
		}
		void h();
	}
	void f();
}

void Outer::f() {
	i--;
}

void Outer::Inner::h() {
	i--;
}
