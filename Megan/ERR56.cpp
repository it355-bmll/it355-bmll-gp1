#include <memory>
#include <iostream>

class SPResourceClass {
private:
    std::shared_ptr<int> m_p;
    std::shared_ptr<float> m_q;
public:
    SPResourceClass() : m_p(std::make_shared<int>()), m_q(std::make_shared<float>()) {
    // Implicitly defined dtor is OK for these members,
    // shared_ptr will clean up and avoid leaks
  }
};

int main(){
  SPResourceClass obj;
  std::cout << "Created and Destroyed Successfully" << std::endl;
}
