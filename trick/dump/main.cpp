#include <iostream>
#include <string>

#include <sstream>
#include <fstream>

#include <iterator>

struct DumpOS{
    std::string prefix = "D:/Reposity_github/CPlusPlus/trick/dump/build/";
    std::ostringstream oss;
    void clear() {oss.str("");}
    template<class T>
    DumpOS & operator << (const T & st) {
        oss << st << " ";
        return * this;
    }
    template<class T>
    DumpOS & operator >> (const T & st) {
        oss << st << std::endl;
        return * this;
    }
    void dump(const std::string name) {
        std::string path = prefix + name + ".txt";
        std::string st = oss.str();
        std::ofstream ofs(path, std::ios::binary);
        if (ofs) {
            std::copy(st.c_str(), st.c_str() +st.length(), std::ostream_iterator<char>{ofs});
            ofs.close();
        }
    }
};

int main() {
    DumpOS oss;
    oss << "hellow" >> "world";
    oss.dump("test");

    return 0;
}