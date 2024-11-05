
//ANIL AKSU 230103020

#include <iostream> 
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	int* zardeney = new int[6] {0}; //zar kenar sayısı kadar dinamik dizi tanımlıyoruz ve ilk değerlerine sıfır atıyoruz.

	srand(time(0)); //srand (seed) fonksiyonu random oluşturmak için

	for (int i = 0; i < 6000; i++) { //zar atma simulasyonunu tanımlıyoruz (6000 kez zar atılacak ve random veriye göre 0-6 artıracak.)
		int roll = rand() % 6; // 0-5 arası yani 1-6 arası rastgele atıp one göre o gelen kısmı döngü ile artırıyor.
		zardeney[roll]++;
	}

	for (int i = 0; i < 6; i++) { //her bir sayının (zardaki) kaç kez geldiğini yazdırır.
		cout << (i + 1) << " : " << " appeared " << zardeney[i] << " times " << endl;
}

	delete[] zardeney; //ana belleği serbest bırakır (dinamik diziden dolayı).

	return 0;

}