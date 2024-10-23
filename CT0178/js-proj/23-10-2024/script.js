for (v of [1, "pippo", true]) console.log(v);
for (v of "pippo") console.log(v);
let [c1, c2, c3, c4, c5] = [..."pippo"];
// Iterabili
function PrimeSequence(max) {
  this[Symbol.iterator] = function () {
    let currentPrime = 1;
    let maxPrime = max;
    return {
      next() {
        let isPrime = false;
        while (!isPrime && currentPrime < maxPrime) {
          currentPrime++;
          isPrime = true;
          for (let i = 2; i <= currentPrime / 2; i++) {
            if (currentPrime % i === 0) isPrime = false;
          }
        }
        if (isPrime) return { value: currentPrime };
        else return { done: true };
      },
    };
  };
}

let sequence = new PrimeSequence(100);
/*I due iteratori sono indipendenti infatti p va avanti solo
 * dopo che p1 ha finito la stampa di tutti i num primi
 */
for (let p of sequence) for (let p1 of sequence) console.log(p, p1);
