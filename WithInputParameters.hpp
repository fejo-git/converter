#include <cstdint>
#include <vector>

namespace
{
constexpr std::uint32_t hex{16U};
constexpr std::uint32_t octal{8U};
} // namespace

void runWithInputParameters(const std::vector<std::string> &args);
std::size_t GetCurrentIndex(const std::vector<std::string> &vector,
                            const std::string &value);