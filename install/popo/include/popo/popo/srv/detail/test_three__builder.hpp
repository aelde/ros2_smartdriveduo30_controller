// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from popo:srv/TestThree.idl
// generated code does not contain a copyright notice

#ifndef POPO__SRV__DETAIL__TEST_THREE__BUILDER_HPP_
#define POPO__SRV__DETAIL__TEST_THREE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "popo/srv/detail/test_three__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace popo
{

namespace srv
{

namespace builder
{

class Init_TestThree_Request_c
{
public:
  explicit Init_TestThree_Request_c(::popo::srv::TestThree_Request & msg)
  : msg_(msg)
  {}
  ::popo::srv::TestThree_Request c(::popo::srv::TestThree_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::popo::srv::TestThree_Request msg_;
};

class Init_TestThree_Request_b
{
public:
  explicit Init_TestThree_Request_b(::popo::srv::TestThree_Request & msg)
  : msg_(msg)
  {}
  Init_TestThree_Request_c b(::popo::srv::TestThree_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_TestThree_Request_c(msg_);
  }

private:
  ::popo::srv::TestThree_Request msg_;
};

class Init_TestThree_Request_a
{
public:
  Init_TestThree_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestThree_Request_b a(::popo::srv::TestThree_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_TestThree_Request_b(msg_);
  }

private:
  ::popo::srv::TestThree_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::popo::srv::TestThree_Request>()
{
  return popo::srv::builder::Init_TestThree_Request_a();
}

}  // namespace popo


namespace popo
{

namespace srv
{

namespace builder
{

class Init_TestThree_Response_sum
{
public:
  Init_TestThree_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::popo::srv::TestThree_Response sum(::popo::srv::TestThree_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::popo::srv::TestThree_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::popo::srv::TestThree_Response>()
{
  return popo::srv::builder::Init_TestThree_Response_sum();
}

}  // namespace popo

#endif  // POPO__SRV__DETAIL__TEST_THREE__BUILDER_HPP_
