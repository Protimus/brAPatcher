#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

// Short alias for this namespace
namespace pt = boost::property_tree;

// Create a root
pt::ptree root;

// Load the json file in this ptree
pt::read_json("../config.json", root);

// Reading host informations
std::string host_domain = root.get<std::string>("host_domain");
int host_port = root.get<int>("host_port", 0);

// Reading sql informations
std::string sql_domain = root.get<std::string>("sql_domain");
int sql_port = root.get<int>("sql_port", 0);

// Reading patch informations
std::string patch = root.get<std::string>("patch_list");