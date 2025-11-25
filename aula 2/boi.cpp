#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vll vector<ll>
#define vld vector<ld>

struct Boi {
  string nome;
  vector<double> notas;
  double total;
  ll ordem;
};

bool compara(const Boi& a, const Boi& b) {
  // Implemente a lógica aqui!
}

int main() {
  ll n_alegorias, n_bois;
  cin >> n_alegorias >> n_bois;

  vector<ll> peso(n_alegorias);
  for (ll i = 0; i < n_alegorias; i++) {
    cin >> peso[i];
  }

  vector<Boi> bois(n_bois);

  for (ll i = 0; i < n_bois; i++) {
    Boi& boi = bois[i];
    cin >> boi.nome;
    boi.notas.resize(n_alegorias);
    boi.total = 0.0;
    boi.ordem = i;

    for (ll j = 0; j < n_alegorias; j++) {
      ll nota;
      cin >> boi.notas[j];
      boi.total += boi.notas[j] * peso[j];
    }
  }

  sort(bois.begin(), bois.end(), compara);

  for (const auto& boi : bois) {
    cout << boi.nome << "\n";
  }

  return 0;
}
