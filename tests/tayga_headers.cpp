/* Pooka's Free Software License. In-house C++ header compilation. */
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <memory>
#include <tuple>
#include <optional>
#include <variant>
#include <exception>
#include <type_traits>
#include <permafrost/native_api.h>
#include <tayga/tayga_api.h>
static_assert(sizeof(WmBaremetalProgramApi)==412,"service table");
std::string sdk_cpp_probe(){
 std::vector<int> values;values.push_back(3);values.push_back(1);
 std::sort(values.begin(),values.end());std::map<std::string,int> table;
 table[std::string("value")]=values.front();std::optional<int> option(values.back());
 std::variant<int,std::string> variant(*option);(void)variant;return table.begin()->first;
}
