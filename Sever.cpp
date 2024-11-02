#include <iostream>
#include <chrono>
#include <thread>

void wait(int sec);

void wait(int sec) {
    std::this_thread::sleep_for(std::chrono::seconds(sec));
}

int main() {
  for (int i = 0; i < 10; i++) {
      std::cout << "This File Is From Sever" << "\n" << std::endl;
  }
  wait(5);
}
