// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from popo:srv/TestThree.idl
// generated code does not contain a copyright notice

#ifndef POPO__SRV__DETAIL__TEST_THREE__TRAITS_HPP_
#define POPO__SRV__DETAIL__TEST_THREE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "popo/srv/detail/test_three__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace popo
{

namespace srv
{

inline void to_flow_style_yaml(
  const TestThree_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: c
  {
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TestThree_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestThree_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace popo

namespace rosidl_generator_traits
{

[[deprecated("use popo::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const popo::srv::TestThree_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  popo::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use popo::srv::to_yaml() instead")]]
inline std::string to_yaml(const popo::srv::TestThree_Request & msg)
{
  return popo::srv::to_yaml(msg);
}

template<>
inline const char * data_type<popo::srv::TestThree_Request>()
{
  return "popo::srv::TestThree_Request";
}

template<>
inline const char * name<popo::srv::TestThree_Request>()
{
  return "popo/srv/TestThree_Request";
}

template<>
struct has_fixed_size<popo::srv::TestThree_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<popo::srv::TestThree_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<popo::srv::TestThree_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace popo
{

namespace srv
{

inline void to_flow_style_yaml(
  const TestThree_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TestThree_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestThree_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace popo

namespace rosidl_generator_traits
{

[[deprecated("use popo::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const popo::srv::TestThree_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  popo::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use popo::srv::to_yaml() instead")]]
inline std::string to_yaml(const popo::srv::TestThree_Response & msg)
{
  return popo::srv::to_yaml(msg);
}

template<>
inline const char * data_type<popo::srv::TestThree_Response>()
{
  return "popo::srv::TestThree_Response";
}

template<>
inline const char * name<popo::srv::TestThree_Response>()
{
  return "popo/srv/TestThree_Response";
}

template<>
struct has_fixed_size<popo::srv::TestThree_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<popo::srv::TestThree_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<popo::srv::TestThree_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<popo::srv::TestThree>()
{
  return "popo::srv::TestThree";
}

template<>
inline const char * name<popo::srv::TestThree>()
{
  return "popo/srv/TestThree";
}

template<>
struct has_fixed_size<popo::srv::TestThree>
  : std::integral_constant<
    bool,
    has_fixed_size<popo::srv::TestThree_Request>::value &&
    has_fixed_size<popo::srv::TestThree_Response>::value
  >
{
};

template<>
struct has_bounded_size<popo::srv::TestThree>
  : std::integral_constant<
    bool,
    has_bounded_size<popo::srv::TestThree_Request>::value &&
    has_bounded_size<popo::srv::TestThree_Response>::value
  >
{
};

template<>
struct is_service<popo::srv::TestThree>
  : std::true_type
{
};

template<>
struct is_service_request<popo::srv::TestThree_Request>
  : std::true_type
{
};

template<>
struct is_service_response<popo::srv::TestThree_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // POPO__SRV__DETAIL__TEST_THREE__TRAITS_HPP_
