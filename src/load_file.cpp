#include <miopen/load_file.hpp>
#include <sstream>
#include <fstream>

namespace miopen {

std::string LoadFile(const boost::filesystem::path& p) { return LoadFile(p.string()); }

std::string LoadFile(const std::string& s)
{
    std::ifstream t(s);
    std::stringstream buffer;
    buffer << t.rdbuf();
    return buffer.str();
}


//bcoquell
//This is needed to load a binary file.
//I actually don't understand how this could work on linux without such mechanism
void LoadBinaryFile(const std::string& s, std::vector<char>& memblock)
{
    std::ifstream t(s, std::ios::in | std::ios::binary | std::ios::ate);

    if(t.is_open())
    {
        std::streampos size = t.tellg();
        memblock.resize(size);
        t.seekg(0, std::ios::beg);
        t.read(&memblock[0], size);
        t.close();
    }
}

} // namespace miopen
