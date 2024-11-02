#include <iostream>
#include <chrono>
#include <thread>

void wait(int sec);

void wait(int sec) {
    std::this_thread::sleep_for(std::chrono::seconds(sec));
}

int main() {
    wait(2);
  for (int i = 0; i < 100; i++) {
      wait(0.1);
      std::cout << "This File Is From Sever" << "\n" << std::endl;
  }
  wait(5);
  return 0;
}
