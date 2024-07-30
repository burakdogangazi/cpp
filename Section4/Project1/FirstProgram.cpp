#include <iostream>

int main() {

    int fav_num;

    std::cout << "Enter fav num:";
    std::cin >> fav_num;
    std::cout << "unds" << std::endl;
    return 0;
}

/*C++'daki std::endl ifadesi, standart çıkış akışına (örneğin, konsola) bir yeni satır karakteri ekler ve ardından çıkış akışını boşaltır (flush). Bu, Java'da şu iki ifade ile benzer bir işleve sahiptir:

Yeni Satır Ekleme:
Java'da yeni satır karakteri eklemek için System.out.println() veya System.out.print("\n") kullanılabilir. Örneğin:

java
System.out.println("unds");
Bu ifade, C++'daki std::endl gibi bir yeni satır ekler.

Akışı Boşaltma:
C++'da std::endl ayrıca akışı da boşaltır. Java'da bu işlevsellik System.out.flush() ile sağlanır. Ancak, System.out.println() veya System.out.print() kullanırken genellikle bu ek işleme gerek yoktur, çünkü Java, bu yöntemlerin zaten kendi tamponlarını otomatik olarak boşaltmasını sağlar.
Özetle, C++'daki std::endl, Java'daki System.out.println() ile benzerdir, ancak Java'da ek olarak flush() yapmak genellikle gereksizdir.*/

/*
 * Kısaca, "akışı boşaltmak" (flushing) tamponda bekleyen verilerin hemen çıktı cihazına (ekran, dosya vb.) gönderilmesini sağlar. Bu, verilerin kaybolmasını önler ve kullanıcıya anında geri bildirim verir. C++'da std::endl, Java'da System.out.flush() bu işlevi yerine getirir.
 */


/*Linker errors
 *
 * The linker is having trouble linking all the object files together to create an executable usually there is a library or object file that is missing.
 */