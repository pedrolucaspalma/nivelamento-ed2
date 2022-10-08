#include <iostream>
#include <cstdlib>
struct Node {
int value = rand() % 20;
Node∗ next = nullptr ;
};

int main() {
Node ∗head = new Node; 
Node ∗current = head;
int n = rand() % 20; 
for (int i = 0; i < n; i++) {
Node ∗node = new Node;
current−>next = node;
current = node;
}
Node ∗valorAtual = head;
Node ∗valorMedio= head;
int incr = 0;
while (valorAtual != nullptr ) {
valorAtual = valorAtual−>next;
incr += 1;
if (( incr % 2) == 0) {
3

valorMedio = valorMedio−>next;
}
}
std : : cout << valorMedio−>value << ”\n”;
return 0;
}
