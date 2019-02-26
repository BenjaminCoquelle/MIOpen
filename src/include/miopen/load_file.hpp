#ifndef MIOPEN_GUARD_MLOPEN_LOAD_FILE_HPP
#define MIOPEN_GUARD_MLOPEN_LOAD_FILE_HPP

#include <boost/filesystem/path.hpp>
#include <string>
#include <vector>

namespace miopen {

std::string LoadFile(const std::string& s);
std::string LoadFile(const boost::filesystem::path& p);
void LoadBinaryFile(const std::string& s, std::vector<char>& memblock);

} // namespace miopen

#endif
