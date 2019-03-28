#include <iostream>
#include "GACipher.h"

int main()
{
    int popSize = 100;
    int crossPoints = 2;
    int prune = 0;              // 0 -> no pruning (cut or flip)  | 1 -> cut  | 2 -> flip  (NOT MOD)
    double mutationRate = .1;
    double copyRate = .1;
    double _time = 12 * 60000;
    double elitism = .1;
    std::string actualKey = "NVPJUEGRAQZCLKBWYDOHFISXTM";

    GACipher test(copyRate,
                mutationRate,
                _time,
                popSize,
                actualKey,
                crossPoints,
                prune,
                elitism);


    double uniWeight = 1;
    double diWeight = 1;
    double triWeight = 1;

    // test.setFreqWeights(uniWeight,diWeight,triWeight);
    test.run("../Test_Files/Cipher/test_1.txt");
    // test.setFreqWeights(uniWeight*4,diWeight*2,triWeight);
    // test.run("../Test_Files/Cipher/test_4.txt");
    // test.setFreqWeights(uniWeight*3,diWeight*2,triWeight);
    // test.run("../Test_Files/Cipher/test_5.txt");
}
