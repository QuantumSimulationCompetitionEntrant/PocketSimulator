# PocketSimulator
PocketSimulator is a space-efficient simulator for arbitrary quantum circuits. Many existing quantum computation simulators operate on the state-vector representation of quantum states, using time and space exponential to the # of qubits involved. In contrast, PocketSimulator adapts a path-integral-esque approach to simulation by iterating over different computation paths successively, achieving *linear* space usage in the # of qubits + the # of gates. 
## About
Shi has [shown](https://arxiv.org/abs/quant-ph/0205115) that Hadamard and Toffoli gates together are sufficient for universal quantum computation (ie. any quantum computation can be computed with a circuit composed of only of Hadamard/Toffoli gates).
Because Toffoli gates are universal for classical computation and therefore...
## Getting Started
PocketSimulator is contained entirely in PathIntegral.cpp; experimental implementations of other simulation methods are located in LabTests.cpp. Any compiler or environment capable of c++ program execution is suitable for running PocketSimulator.
## Running Circuits
PocketSimulator takes three main arguments for custom simulation:
- **n**: # of qubits
- **length**: # of "splitting" gates in the circuit
- **gates.txt**: text file encoding the computation to be simulated
n and length can be modified in the main() method of PathIntegral.cpp
