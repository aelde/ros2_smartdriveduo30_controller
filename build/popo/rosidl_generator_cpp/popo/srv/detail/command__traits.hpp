// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from popo:srv/Command.idl
// generated code does not contain a copyright notice

#ifndef POPO__SRV__DETAIL__COMMAND__TRAITS_HPP_
#define POPO__SRV__DETAIL__COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "popo/srv/detail/command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace popo
{

namespace srv
{

inline void to_flow_style_yaml(
  const Command_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: cmd
  {
    out << "cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Command_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Command_Request & msg, bool use_flow_style = false)
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
  const popo::srv::Command_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  popo::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use popo::srv::to_yaml() instead")]]
inline std::string to_yaml(const popo::srv::Command_Request & msg)
{
  return popo::srv::to_yaml(msg);
}

template<>
inline const char * data_type<popo::srv::Command_Request>()
{
  return "popo::srv::Command_Request";
}

template<>
inline const char * name<popo::srv::Command_Request>()
{
  return "popo/srv/Command_Request";
}

template<>
struct has_fixed_size<popo::srv::Command_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<popo::srv::Command_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<popo::srv::Command_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace popo
{

namespace srv
{

inline void to_flow_style_yaml(
  const Command_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: feedback
  {
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Command_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Command_Response & msg, bool use_flow_style = false)
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
  const popo::srv::Command_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  popo::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use popo::srv::to_yaml() instead")]]
inline std::string to_yaml(const popo::srv::Command_Response & msg)
{
  return popo::srv::to_yaml(msg);
}

template<>
inline const char * data_type<popo::srv::Command_Response>()
{
  return "popo::srv::Command_Response";
}

template<>
inline const char * name<popo::srv::Command_Response>()
{
  return "popo/srv/Command_Response";
}

template<>
struct has_fixed_size<popo::srv::Command_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<popo::srv::Command_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<popo::srv::Command_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<popo::srv::Command>()
{
  return "popo::srv::Command";
}

template<>
inline const char * name<popo::srv::Command>()
{
  return "popo/srv/Command";
}

template<>
struct has_fixed_size<popo::srv::Command>
  : std::integral_constant<
    bool,
    has_fixed_size<popo::srv::Command_Request>::value &&
    has_fixed_size<popo::srv::Command_Response>::value
  >
{
};

template<>
struct has_bounded_size<popo::srv::Command>
  : std::integral_constant<
    bool,
    has_bounded_size<popo::srv::Command_Request>::value &&
    has_bounded_size<popo::srv::Command_Response>::value
  >
{
};

template<>
struct is_service<popo::srv::Command>
  : std::true_type
{
};

template<>
struct is_service_request<popo::srv::Command_Request>
  : std::true_type
{
};

template<>
struct is_service_response<popo::srv::Command_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // POPO__SRV__DETAIL__COMMAND__TRAITS_HPP_
