#include <iostream>
#include <string>
using namespace std;

class typebinian {
	public:
		void suaranyapasti(string suara);
		int hobi(string hobi);
		string ekpresimarah;

		
};
int main(){
	typebinian pendiam,penyarikan,pemamaian,kijil ;
	pendiam.ekpresimarah = " Ngeri banar " ;
	penyarikan.ekpresimarah = " Bediam ja kaya urang bisu tapi muha rangut rangut" ;
	pemamaian.ekpresimarah = " Kuciak kuciak tarus kada beampihan " ;
	kijil.ekpresimarah = " Beolah status tarus di sosmed " ;
	
	cout <<"Ciri-ciri Binian Pendiam: \n\n";
	cout <<(pendiam.ekpresimarah);
	pendiam.suaranyapasti (" hmmmm");
	pendiam.hobi(" Nonton drama korea");
	cout <<"_______________________________\n\n";

	cout <<"Ciri-ciri Binian Penyarikan: \n\n";
	cout <<(penyarikan.ekpresimarah);
	penyarikan.suaranyapasti (" iihhaaay");
	penyarikan.hobi (" belanja dan makan");
	cout <<"_______________________________\n\n";

	cout <<"Ciri-ciri Binian Pemamaian: \n\n";
	cout <<(pemamaian.ekpresimarah);
	pemamaian.suaranyapasti (" ughhhh");
	pemamaian.hobi (" Nonton konser dangdut");
	cout <<"_______________________________\n\n";
	
	cout <<"Ciri-ciri Binian Kijil: \n\n" ;
	cout <<(kijil.ekpresimarah);
	kijil.suaranyapasti (" aghhh ai");
	kijil.hobi (" Bejalanan kesana kemari") ;
	cout <<"_______________________________\n\n";

}
void typebinian::suaranyapasti(string suara){  
	cout <<"\n suara nya pasti"<<suara<<endl;
}
int typebinian::hobi(string hobi){
	cout <<"\n hobinya adalah" <<hobi<<endl;
}

