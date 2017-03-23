#include<iostream>
using namespace std;

struct tnode{
	int data;
	tnode *next;
};
class LinkedList{
	public:
	tnode *head;
	tnode *tail;

	void awal(int simpan){
		tnode *baru = new tnode();
		head = baru;
		tail = baru;
		baru->data=simpan;
		baru->next=NULL;
	}
	void node_depan(int simpan){
		tnode *baru = new tnode();
		baru->data=simpan;
		baru->next=head;
		head=baru;
	}
	void node_belakang(int simpan){
		tnode *baru = new tnode();
		tnode *pindah = new tnode();
		pindah=tail;
		baru->data=simpan;
		pindah->next=baru;
		baru->next=NULL;
		tail=baru;
	}
	void hapusnode_depan(){
		tnode *del = new tnode();
		del = head;
		head = head->next;
		delete del;
		}
	void hapusnode_belakang(){
		tnode *del = new tnode();
		tnode *cari = new tnode();
		del=head;
		while(del!=tail){
			cari=del;
			del=del->next;
		}
		cari->next=NULL;
		cari=tail;
		delete del;
	}
	void cetak(){
		tnode *baru = new tnode();
		baru=head;
		while(baru!=NULL){
			cout<<baru->data<<" -> ";
			baru=baru->next;
		}
		if(baru==NULL){
			cout<<"NULL";
		}
		cout<<endl;
	}
};
int main(){
	LinkedList list;
	list.awal(20);
	list.cetak();
	list.node_depan(30);
	list.cetak();
	list.node_belakang(50);
	list.cetak();
	list.hapusnode_depan();
	list.cetak();
	list.hapusnode_belakang();
	list.cetak();
}
