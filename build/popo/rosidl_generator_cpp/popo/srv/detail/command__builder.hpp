// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from popo:srv/Command.idl
// generated code does not contain a copyright notice

#ifndef POPO__SRV__DETAIL__COMMAND__BUILDER_HPP_
#define POPO__SRV__DETAIL__COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "popo/srv/detail/command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace popo
{

namespace srv
{

namespace builder
{

class Init_Command_Request_cmd
{
public:
  Init_Command_Request_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::popo::srv::Command_Request cmd(::popo::srv::Command_Request::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::popo::srv::Command_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::popo::srv::Command_Request>()
{
  return popo::srv::builder::Init_Command_Request_cmd();
}

}  // namespace popo


namespace popo
{

namespace srv
{

namespace builder
{

class Init_Command_Response_feedback
{
public:
  Init_Command_Response_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::popo::srv::Command_Response feedback(::popo::srv::Command_Response::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::popo::srv::Command_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::popo::srv::Command_Response>()
{
  return popo::srv::builder::Init_Command_Response_feedback();
}

}  // namespace popo

#endif  // POPO__SRV__DETAIL__COMMAND__BUILDER_HPP_
