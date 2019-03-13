#include <miopen/env.hpp>
#include <miopen/stringutils.hpp>

#include <string>

MIOPEN_DECLARE_ENV_VAR(HOME)

namespace miopen {

std::string ExpandUser(std::string p)
{
#if defined(WIN32)
    const char* home_dir = GetStringEnv(USERPROFILE{});
#else
    const char* home_dir = GetStringEnv(HOME{});
#endif
    if(home_dir == nullptr || home_dir == std::string("/") || home_dir == std::string(""))
    {
        // todo:
        // need to figure out what is the correct thing to do here
        // in tensoflow unit tests run via bazel, $HOME is not set, so this can happen
        // setting home_dir to the /tmp for now
        home_dir = "/tmp";
    }

    return ReplaceString(p, "~", home_dir);
}

} // namespace miopen
