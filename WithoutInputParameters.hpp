#include <cstdint>

namespace
{
constexpr std::uint32_t input_help{1};
constexpr std::uint32_t input_version{2};
constexpr std::uint32_t input_dec_to_hex{3};
constexpr std::uint32_t input_hex_to_dec{4};
constexpr std::uint32_t input_dec_to_octal{5};
constexpr std::uint32_t input_octal_to_dec{6};
constexpr std::uint32_t input_exit{7};
} // namespace

void runWithoutInputParameters();
void getVersion();
void getDec2Hex();
void getDec2Octal();
void getHex2Dec();
void getOctal2Dec();