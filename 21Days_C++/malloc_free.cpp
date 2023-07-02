# include <iostream>

using namespace std;

class Obj {
public:
	Obj(void){
		cout << "Initialization" << endl;
	}
	
	~Obj(void) {
		cout << "Destory" << endl;
	}

	void Initialize() {
		cout << "Initialization" << endl;
	}

	void Desstory() {
		cout << "Destroy" << endl;
	}
};

void UseMallocFree(void) {
	Obj* a = (Obj*)malloc(sizeof(Obj));
	a->Initialize();
	a->Desstory();
	free(a);
}

void UseNewDelete(void) {
	Obj* a = new Obj;
	delete a;
}

int main() {

	Obj obj;
	UseMallocFree();
	UseNewDelete();

	return 0;
}
